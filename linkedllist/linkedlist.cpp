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
int lenoflliter(node*head);
void deleteathead(node*&head,node*&tail);
void deleteattail(node*&head,node*&tail);
void insertinllathead(node*&head,node*&tail,int d){
	
	 node*x=new node(d);
	 if(head==NULL){
	 	// ll is khali
	 	head=x;
	 	tail=x;
	 }
	 else{
	 	x->next=head;
	 	head=x;
	 }

}
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

void insertinllinbetween(node*&head,node*&tail,int d,int pos){
	
	 node*x=new node(d);
	 if(head==NULL){
	 	insertinllathead(head,tail,d);
	 }
	 else if(pos==0){
	 	insertinllathead(head,tail,d);
	 
	 }
	 else if(pos>=lenoflliter(head)){
	 	insertinllattail(head,tail,d);
	 
	 }
	 else{
	 	node*temp=head;
	 	for(int jump=1;jump<=pos-1;jump++){
	 		temp=temp->next;
	 	}

	 	x->next=temp->next;
	 	temp->next=x;

	 }

}

void deleteinllinbetween(node*&head,node*&tail,int pos){
	
	 
	 if(head==NULL){
	 	return;
	 }
	 else if(pos==0){
	 	deleteathead(head,tail);
	 
	 }
	 else if(pos>=lenoflliter(head)-1){
	 	deleteattail(head,tail);
	 
	 }
	 else{
	 	node*temp=head;
	 	for(int jump=1;jump<=pos-1;jump++){
	 		temp=temp->next;
	 	}

	 	node*p=temp->next;
	 	temp->next=p->next;
	 	delete p;
	 	p=NULL;

	 	
	 }

}
void deleteathead(node*&head,node*&tail){
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

}

void deleteattail(node*&head,node*&tail){
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
		node*temp=head;
		while(temp->next!=tail){
			temp=temp->next;
		}
		delete tail;
		tail=temp;
		tail->next=NULL;
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
int lenoflliter(node*head){
	node*temp=head;
	int co=0;

	while(temp!=NULL){
		co++;
	temp=temp->next;

	}

	return co;
	
}

int lenofllrec(node*head){
	// base case
	if(head==NULL){
		return 0;
	}


	// rec case
	return 1+lenofllrec(head->next);
	
}

// bool searchlliter(node*head,int key){
// 	node*temp=head;
	

// 	while(temp!=NULL){
// 		if(temp->data==key){
// 			return true;
// 		}
// 	temp=temp->next;

// 	}

// 	return false;
	
// }

bool searchllrec(node*head,int key){
	// base case
	if(head==NULL){
		return false;
	}


	// rec case
	if(head->data==key){
		return true;
	}
	return searchllrec(head->next,key);
	
}

void bubblesort(node*head){
		for(int times=1;times<=lenofllrec(head)-1;times++){
		
		for(node*temp=head;temp->next!=NULL;temp=temp->next){
		if(temp->data>temp->next->data){
			swap(temp->data,temp->next->data);
		}
	}
}
}


int main(){
	node*head=NULL;
	node*tail=NULL;
	
	insertinllathead(head,tail,30);//30
	// head-->300,tail-->300
	insertinllathead(head,tail,70);//70 30

	// head-->200,tail-->300

	insertinllathead(head,tail,40);//// 40 70 30


	insertinllattail(head,tail,90);// 40 70 30 90

	insertinllattail(head,tail,24); //// 40 70 30 90 24
	insertinllattail(head,tail,73);// 40 70 30 90 24 73

	deleteathead(head,tail);//70 30 90 24 73

	deleteattail(head,tail);//70 30 90 100 24 
	printll(head);

	// cout<<lenoflliter(head)<<endl;

	// cout<<lenofllrec(head)<<endl;
	// if(searchlliter(head,990)){
	// 	cout<<"key is present"<<endl;
	// }
	// else{
	// 	cout<<"key is not present"<<endl;

	// }

	// if(searchllrec(head,90)){
	// 	cout<<"key is present"<<endl;
	// }
	// else{
	// 	cout<<"key is not present"<<endl;

	// }

	// insertinllinbetween(head,tail,110,3);
	deleteinllinbetween(head,tail,2);

	printll(head);


	bubblesort(head);
	printll(head);

	

}