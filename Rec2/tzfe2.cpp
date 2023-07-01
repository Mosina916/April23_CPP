#include<iostream>
using namespace std;
string arr[10]={"zero","one","two","three","Four","Five","Six","Seven","Eight","Nine"};
void wordformrev(int n){
	// base case
	if(n==0){
		return;
	}
	// rec case
	
	wordformrev(n/10);
	cout<<arr[n%10]<<" ";
}
int main(){
	int n;
	cin>>n;
	wordformrev(n);

	return 0;
}