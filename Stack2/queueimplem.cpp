#include<iostream>
#include<vector>
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

class Queue{
	node*head;
	node*tail;
	int len;
	
public:
	Queue(){
		head=NULL;
		tail=NULL;
		len=0;
	}
	

	
	void push(int d){
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
	 len++;
		
	}



	// pop
	void pop(){
		if(head==NULL){
		return;
	}
	else if(head->next==NULL){
		// single node
		delete head;
		head=NULL;
		tail=NULL;

	}
	else{
		// multiple node
		node*temp=head->next;
		delete head;
		head=temp;
	}
	len--;
		

	}


	
	int  front(){
		return head->data;
	
	}


	// empty
	bool empty(){
		return len==0;
		
	}


	// size
	int size(){
		return len;
		
	}

};
int main(){
	Queue q;
	q.push(7);
	q.push(70);
	q.push(17);
	q.push(3);
	q.push(6);
	q.push(3);

	while(!q.empty()){
		cout<<q.front()<<endl;
	q.pop();


	}
	cout<<endl;
	







	return 0;
}