#include<iostream>
#include<queue>
using namespace std;
int main(){

	queue<char> s;
	
	s.push('A');
	s.push('D');
	s.push('B');
	s.push('F');
	

	while(!s.empty()){
		cout<<s.front()<<" ";
	s.pop();


	}
	




	return 0;

}