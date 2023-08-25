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



bool iscycleornot(node*head){
	node*slow=head;
	node*fast=head;

	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
	fast=fast->next->next;
	if(slow==fast){
		return true;
	}

	}
	return false;

}
void createcycle(node*head,int pos){
	node*temp=head;
	for(int jump=1;jump<=pos;jump++){
		temp=temp->next;
	}
	node*x=head;
	while(x->next!=NULL){
		x=x->next;

	}
	x->next=temp;
}

void removecycle(node*head){
	// iscycle present or not
	bool kyacyclemila=false;
	node*slow=head;
	node*fast=head;

	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
	fast=fast->next->next;
	if(slow==fast){
		kyacyclemila=true;
		break;
		
	}

	}

	// if cycle is presnt then remove it else don't do anything
	if(kyacyclemila==true){
		// then rempve it
		slow=head;
		while(slow->next!=fast->next){
			slow=slow->next;
		fast=fast->next;

		}
		fast->next=NULL;
		

	}
}
node*p=NULL;
node* reverse(node*curr,node*prev){
	// base case
	if(curr==NULL){
		p=prev;
		return prev;
	}
	// /rec case
	node* aagekill=curr->next;
	curr->next=prev;
	return reverse(aagekill,curr);//5 4 3 2
	
}

int main(){


	node*head=NULL;
	node*tail=NULL;
	int n,data;
	cin>>n;//5
	for (int i = 0; i <n; ++i)
	{
		cin>>data;
		insertinllattail(head,tail,data);//<--1 2 3 4 5 
		
	}

	reverse(head,NULL);
	printll(p);

	



	return 0;

}