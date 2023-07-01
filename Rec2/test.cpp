#include<iostream>
using namespace std;
int n;//2048
string arr[10]={"zero","one","two","three","Four","Five","Six","Seven","Eight","Nine"};
void wordformrev(){
	// base case
	if(n==0){
		return;
	}
	// rec case

	cout<<arr[n%10]<<" ";
	n=n/10;
	wordformrev();
}
int main(){
	
	cin>>n;
	wordformrev();

	return 0;
}