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
node* mergetowsortedll(node*head1,node*head2){
	//head1-->2 6 7
	//head2-->1 8 9 11
	// newhead->1 2 6 7 8 9 11

	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}

	node*newhead=NULL;
	if(head1->data<head2->data){
		newhead=head1;//0 ka address
		newhead->next=mergetowsortedll(head1->next,head2);//1 ka adrees return karega
		// return newhead;
	}
	else{
		newhead=head2;
		newhead->next=mergetowsortedll(head1,head2->next);//2 ka adrees return karega
		// return newhead;
	}
	return newhead;//-->1 2 4 5 6



}

node* mergesort(node*head){//null
	// base case
	if(head==NULL){
		return NULL;
	}
	if(head->next==NULL){
		// agar single ele hai
		return head;
	}



	// rec case
	node*m=midpoint(head);//head-->2 5 4-->null  6 1-->null -->s ka address
	node*temp=m->next;//--> 6 ka adress
	m->next=NULL;
	node*a=mergesort(head);//2 4 5 
	node*b=mergesort(temp);//1 6
	return mergetowsortedll(a,b);


}

node* reverse(node*head){
	node*current=head;
	node*prev=NULL;

	while(current!=NULL){
		node*aagekill=current->next;
	current->next=prev;
	prev=current;
	current=aagekill;

	}

	return prev;

	
}
// head-->2 5 4-->null   x--> 6 1 7 9 12 41
//ad-->newhe4 5 2-->7 1 6 41 12 9
node* kreverse(node*head,int k){
	if(head==NULL){
		return NULL;
	}


	node*temp=head;
	for (int jump = 1; jump <=k-1;jump++)
	{
		temp=temp->next;
	}
	node*x=temp->next;//6 ka adrees 
	temp->next=NULL;
	node*newhead=reverse(head);
	node*p=kreverse(x,k);
	node*i=newhead;
	while(i->next!=NULL){
		i=i->next;
	}

	// i hoga 2 k address p
	i->next=p;

	return newhead;

}




int main(){
	// node*head1=NULL;
	// node*tail1=NULL;
	// node*head2=NULL;
	// node*tail2=NULL;
	// int n,data;
	// cin>>n;//5
	// for (int i = 0; i <n; ++i)
	// {
	// 	cin>>data;
	// 	insertinllattail(head1,tail1,data);//4 6 7

	// }
	// int m;
	// cin>>m;
	// for (int i = 0; i <m; ++i)
	// {
	// 	cin>>data;
	// 	insertinllattail(head2,tail2,data);//1 8 9 11

	// }

	// node*newhead=mergetowsortedll(head1,head2);
	// printll(newhead);

	node*head=NULL;
	node*tail=NULL;
	int n,data;
	cin>>n;//5
	for (int i = 0; i <n; ++i)
	{
		cin>>data;
		insertinllattail(head,tail,data);//2 5 4 6 1 7 9 12 41
		//4 5 2 7 1 6 41 12 9
	}

	// reverse(head);
	// printll(head);
	int k;
	cin>>k;

	node*nh=kreverse(head,k);//3

	// node*newh=mergesort(head);
	printll(nh);



	return 0;

}