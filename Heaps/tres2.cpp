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

class ll{
public:
	node*h;
	node*t;
	ll(){
		h=NULL;
		t=NULL;
	}
};


ll bstintosll(node*root){
	ll x;
	if(root==NULL){
		return x;

	}


	// case 1
	if(root->left==NULL and root->right==NULL){
		x.h=root;
		x.t=root;
		// return x;
	}
	// case 2
	else if(root->left!=NULL and root->right==NULL){
		ll p=bstintosll(root->left);
		p.t->right=root;
		x.h=p.h;
		x.t=root;
		// return x;
	}
	// case 3
	else if(root->left==NULL and root->right!=NULL){
		ll q=bstintosll(root->right);
		root->right=q.h;
		x.h=root;
		x.t=q.t;
		// return x;
		
	}
	else{
		// both lst and rst exist

		ll p=bstintosll(root->left);
		ll q=bstintosll(root->right);
		p.t->right=root;
		root->right=q.h;
		x.h=p.h;
		x.t=q.t;
		// return x;

	}

	return x;
}


void printll(node*head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->right;
	}

	cout<<endl;
}


// 1 2 3 4 5 6 7 8


int arr[]={1,2,3,4,5,6,7,8};


// 8 10 3 14 6 1 4 7 13 -1
// bst ka inorder is always sorted
node* buildbstusingsortedarr(int s,int e){
	if(s>e){
		return NULL;
	}

	int mid=(s+e)/2;
	node*root=new node(arr[mid]);
	root->left=buildbstusingsortedarr(s,mid-1);
	root->right=buildbstusingsortedarr(mid+1,e);
	return root;

}
class c{

public:
	int h;
	bool b;
	c(){
		h=0;
		b=true;
	}
};

c isbalaned(node*root){
	c x;

	if(root==NULL){
		// x.b=true;
		// x.h=0;
		return x;
	}



	c l=isbalaned(root->left);
	c r=isbalaned(root->right);
	x.h=max(l.h,r.h)+1;
	if(l.b==true and r.b==true and abs(l.h-r.h)<=1){
		x.b=true;
	}
	else{
		x.b=false;
	}

	return x;

}

node* lca(node*root,int key1,int key2){// 1 14 -->8   
	// base case
	if(root==NULL){
		return NULL;
	}

	// rec case
	if(root->data==key1||root->data==key2){
		return root;
	}

	node*l=lca(root->left,key1,key2);
	node*r=lca(root->right,key1,key2);
	if(l!=NULL and r!=NULL){
		return root;
	}
	else if(l!=NULL){
		return l;
	}
	return r;


}


int main(){

	node*root=buildbst();
	int key1,key2;
	cin>>key1>>key2;


	lca(root,key1,key2);
	


	return 0;
}