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




int heightintree(node*root){
	if(root==NULL){
		return 0;
	}


	return max(heightintree(root->left),heightintree(root->right))+1;
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
node* insertinbst(node*root,int data){
	if(root==NULL){
		root=new node(data);
		return root;
	}
	else if(data>root->data){
		root->right=insertinbst(root->right,data);
		return root;
	}
	else{
		root->left=insertinbst(root->left,data);
		return root;
	}
}

node* buildbst(){
	node*root=NULL;


	int data;
	cin>>data;//8

	while(data!=-1){
		root=insertinbst(root,data);

	cin>>data;//-1

	}
	return root;
	
}

bool searchinbst(node*root,int key){
	// base case
	if(root==NULL){
		return false;
	}


	// rec case
	if(root->data==key){
		return true;
	}
	else if(key<root->data){
		return searchinbst(root->left,key);
	}
	else{
		return searchinbst(root->right,key);

	}

}
// 3 4 6 7 8 10
void printinsortedordfromrangek1tok2(node*root,int k1,int k2){
	if(root==NULL){
		return;
	}
	printinsortedordfromrangek1tok2(root->left,k1,k2);
	if(root->data>=k1 and root->data<=k2){
		cout<<root->data<<" ";
	}
	printinsortedordfromrangek1tok2(root->right,k1,k2);
}


bool checkbst(node*root,int mi=INT_MIN,int ma=INT_MAX){
	if(root==NULL){
		return true;
	}


	if(root->data>=mi and root->data<=ma and checkbst(root->left,mi,root->data) and checkbst(root->right,root->data+1,ma)){
		return true;
	}

	return false;


}

// 8 10 3 14 6 1 4 7 13 -1
// bst ka inorder is always sorted
int main(){
	node*root=buildbst();

	if(checkbst(root)){
		cout<<"yes bst"<<endl;
	}
	else{
		cout<<"not bst"<<endl;
	}
	// int k1,k2;
	// cin>>k1>>k2;
	// printinsortedordfromrangek1tok2(root,k1,k2);
	// levelwise(root);
	// int key;
	// cin>>key;
	// if(searchinbst(root,key)){
	// 	cout<<"key is present"<<endl;

	// }
	// else{
	// 	cout<<"key is not present"<<endl;
	// }



	return 0;
}