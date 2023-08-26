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