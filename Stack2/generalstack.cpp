#include<iostream>
#include<vector>
using namespace std;
template<typename U>
class stack{
	// vector<int> v;
	// vector<char> v;
	vector<U> v;
public:
	

	// push
	// void push(int d){
	// void push(char d){
	void push(U d){
		v.push_back(d);
	}



	// pop
	void pop(){
		v.pop_back();

	}


	// top
	// int top(){
	// char top(){
	U top(){
		return v[v.size()-1];

	}


	// empty
	bool empty(){
		return v.size()==0;
	}


	// size
	int size(){
		return v.size();
	}

};
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