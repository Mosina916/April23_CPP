#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	// node(int d){
	// 	data=d;
	// 	next=NULL;
	// }
	node(){
		next=NULL;
	}

};
int main(){
	// node x(10);
	node x;
	x.data=10;
	node y;
	y.data=40;
	x.next=&y;//link
	cout<<x.data<<endl;
	cout<<(*x.next).data<<endl;
	cout<<(x.next)->data<<endl;

}