#include <iostream>
using namespace std;
// void f(int b[],int n){
void f(int *b,int n){

	for (int i = 0; i <n; ++i)
	{
		// b[i]=b[i]+30;
		*(b+i)=*(b+i)+30;
	}

	for (int i = 0; i <n; ++i)
	{
		cout<<*(b+i)<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[]={4,5,6,3,7};
	int n=sizeof(arr)/sizeof(int);
	// cout<<arr
	f(arr,n);

	for (int i = 0; i <n; ++i)
	{
		cout<<*(arr+i)<<" ";
	}
	cout<<endl;
	

	
	return 0;
}