#include<iostream>
#include<stack>
using namespace std;
int main(){
	// stack s;
	stack<char> s;
	// s.push(7);
	// s.push(70);
	// s.push(17);
	// s.push(3);
	// s.push(6);
	// s.push(3);

	s.push('A');
	s.push('D');
	s.push('B');
	s.push('F');
	
	// s.push(3);
	// s.pop();
	// cout<<s.v[2]<<endl;
	while(!s.empty()){
		cout<<s.top()<<" ";
	s.pop();


	}
	




	return 0;

}