#include<iostream>
using namespace std;
int main(){

	// int arr[1000];
	// int n;
	// cin>>n;//4
	// for(int i=0;i<=n-1;i=i+1){
	// 	cin>>arr[i];

	// }
	// int abhitakkalargest=arr[0];//3

	// for(int i=1;i<=n-1;i++){
	// 	if(arr[i]>abhitakkalargest){
	// 	abhitakkalargest=arr[i];
	// }

	// }
	// cout<<"abhitalkkalargest is "<<abhitakkalargest<<endl;
	

	int arr[1000];
	int n;
	cin>>n;//5
	for(int i=0;i<=n-1;i=i+1){
		cin>>arr[i];

	}
	int abhitalkkasmallest=INT_MAX;//3

	for(int i=0;i<=n-1;i++){
		if(arr[i]<abhitalkkasmallest){
		abhitalkkasmallest=arr[i];
	}

	}
	cout<<"abhitalkkasmallesr is "<<abhitalkkasmallest<<endl;
	

	
	

	return 0;
}