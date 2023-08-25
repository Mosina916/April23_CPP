#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}
	
	
};

void insertinllattail(node*&head,node*&tail,int d){
	
	 node*x=new node(d);
	 if(head==NULL){
	 	// ll is khali
	 	head=x;
	 	tail=x;
	 }
	 else{
	 	tail->next=x;
	 	tail=x;
	 
	 }

}


void printll(node*head){
	// node*temp=head;

	// while(temp!=NULL){
	// 	cout<<temp->data<<"-->";
	// temp=temp->next;

	// }

	// cout<<endl;
	while(head!=NULL){
		cout<<head->data<<"-->";
	head=head->next;

	}

	cout<<endl;
	
}

int lenofllrec(node*head){
	// base case
	if(head==NULL){
		return 0;
	}


	// rec case
	return 1+lenofllrec(head->next);
	
}
// this will work len odd

// node* midpoint(node*head){
// 	node*slow=head;
// 	node*fast=head;

// 	while(fast->next!=NULL){
// 		slow=slow->next;
// 		fast=fast->next->next;
// 	}

// 	return slow;
// }
// // even k lye kaise kaam karega
// node* midpoint(node*head){
// 	node*slow=head;
// 	node*fast=head;//4 6 2 8 10 7

// 	while(fast!=NULL and fast->next!=NULL){
// 		slow=slow->next;
// 		fast=fast->next->next;
// 	}

// 	return slow;
// }

// even k lye kaise kaam karega
node* midpoint(node*head){
	node*slow=head;
	node*fast=head->next;//4 6 2 8 10 7

	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}

	return slow;
}

node* kthpointfromend(node*head,int k){
	node*x=head;
	node*y=head;
	for(int jump=1;jump<=k-1;jump++){
		y=y->next;
	}
	while(y->next!=NULL){
		x=x->next;
	y=y->next;

	}

	return x;
	

}





int main(){
	node*head=NULL;
	node*tail=NULL;
	int n,data;
	cin>>n;//5
	for (int i = 0; i <n; ++i)
	{
		cin>>data;
		insertinllattail(head,tail,data);//4 6 2 8 10 7

	}

	// node*x=midpoint(head);
	int k;
	cin>>k;
	node*x=kthpointfromend(head,k);

	cout<<x->data<<endl;
	
	
	

}