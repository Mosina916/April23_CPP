#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s,int x){
	if(s.empty()){
		s.push(x);
		return;
	}
	int temp=s.top();
	s.pop();
	insertatbottom(s,x);
	s.push(temp);

}
void reversestack(stack<int> &s){
	if(s.empty()){
		return;
	}
	int x=s.top();
	s.pop();
	reversestack(s);
	insertatbottom(s,x);
}
int main(){
	stack<int> s;
	s.push(7);
	s.push(70);
	s.push(17);
	s.push(3);
	s.push(6);
	
	reversestack(s);
	
	while(!s.empty()){
		cout<<s.top()<<" ";
	s.pop();
	}


	return 0;

}