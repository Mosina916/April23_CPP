#include<iostream>
using namespace std;
int sumofdig(int n){//0
	// base case
	if(n==0){
		return 0;
	}
	// rec case
	return n%10+sumofdig(n/10);//2+
}
int main(){
	int n;
	cin>>n;//4912
	cout<<"sum of digits : "<<sumofdig(n)<<endl;


	return 0;
}