#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};




node* buildtree(){
	int d;
	cin>>d;//8
	if(d==-1){
		return NULL;
	}
	node*root=new node(d);
	root->left=buildtree();//lst
	root->right=buildtree();//lst
	return root;
} 

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

void preoreder(node*root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<",";
	preoreder(root->left);
	preoreder(root->right);

}

void inorder(node*root){
	if(root==NULL){
		return;
	}
	
	inorder(root->left);
	cout<<root->data<<",";
	inorder(root->right);

}




int heightintree(node*root){
	if(root==NULL){
		return 0;
	}


	return max(heightintree(root->left),heightintree(root->right))+1;
}


int diameter(node*root){

	// base case
	if(root==NULL){
		return 0;
	}


	// rec case
	int op1=diameter(root->left);//3 //p th lst
	int op2=diameter(root->right);//2 //p th lst
	int op3=heightintree(root->left)+heightintree(root->right);//6 //passing through root
	return max(op1,max(op2,op3));


}

class p{
public:
	int he;
	int d;

	p(){
		he=0;
		d=0;
	}
};

p optidia(node*root){
	p x;

	// base case
	if(root==NULL){
		return x;
	}
	// rec case
	p le=optidia(root->left);
	p re=optidia(root->right);

	x.he=max(le.he,re.he)+1;

	int op1=le.d;
	int op2=re.d;
	int op3=le.he+re.he;
	x.d=max(op1,max(op2,op3));
	return x;

}




int pre[]={8,10,1,6,4,7,3,14,13};
int ino[]={1,10,4,6,7,8,3,13,14};
int i=0;
node* buildtreefrominandpre(int s,int e){
	// base case
	if(s>e){
		return NULL;
	}

	// rec case

	int d=pre[i];//8
	i++;
	int k;
	for(int j=s;j<=e;j++){
		if(ino[j]==d){
			k=j;//5
			break;

		}
	}

	node*root=new node(d);
	root->left=buildtreefrominandpre(s,k-1);
	root->right=buildtreefrominandpre(k+1,e);
	return root;


}


void levelwise(node*root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node*x=q.front();
		q.pop();
		if(x==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}

		}
		else{
			cout<<x->data<<" ";
			if(x->left!=NULL){
				q.push(x->left);
			}
			if(x->right!=NULL){
				q.push(x->right);
			}
		}
	}

}


int main(){
	// int n=sizeof(pre)/sizeof(int);//9
	// node*root=buildtreefrominandpre(0,n-1);
	// levelwise(root);

	node*root=buildtree();
	levelwise(root);

	// preoreder(root);
	// cout<<endl;
	// inorder(root);


	// // cout<<diameter(root)<<endl;
	// p ans=optidia(root);

	// cout<<ans.he<<endl;
	// cout<<ans.d<<endl;

	


	return 0;
}