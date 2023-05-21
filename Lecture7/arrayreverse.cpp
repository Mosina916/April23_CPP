#include<iostream>
using namespace std;
int main(){

// 	int arr[10];
// // i/p
// 	for(int i=0;i<=9;i=i+1){
// 		cin>>arr[i];

// 	}
	// int arr[1000000];
// i/p
	int n;
	cin>>n;//20
	int arr[n];

	for(int i=0;i<=n-1;i=i+1){
		cin>>arr[i];

	}

	// print
	cout<<"array after reveres : ";
	for(int i=n-1;i>=0;i--){
		cout<<arr[i]<<' ';
	}
	cout<<endl;




	return 0;
}