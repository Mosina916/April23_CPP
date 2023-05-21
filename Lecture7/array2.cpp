#include<iostream>
using namespace std;
int main(){
	// ways to declare array
	// int arr[5]={5,4,6,8,1};
	// int arr[]={5,4,6,8,1};
	// int arr[5]={5,4,6};
	// int arr[5]={0};

	// int arr[]={5,4,6,8,1};
	// int tb=sizeof(arr)/sizeof(int);
	// // print
	// 	for(int i=0;i<=tb-1;i++){
	// 	cout<<arr[i]<<endl;
	// }

	// int arr[1000000];


	// int tb=sizeof(arr)/sizeof(int);
	// print
	// 	for(int i=0;i<=tb-1;i++){
	// 	cout<<arr[i]<<endl;
	// }


	int arr[100];
	int n;
	cin>>n;//10
	// for(int i=0;i<=n-1;i++){
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	// print
		for(int i=0;i<=n-1;i++){
		// cout<<arr[i]<<endl;
			cout<<arr[i]<<" ";
	}






	return 0;
}