#include <iostream>
using namespace std;

int main(){
	// int arr[]={3,5,6,7,1};
	int arr[5];
	// int n=sizeof(arr)/sizeof(int);

	for (int i = 0; i <5; ++i)
	{
		cin>>*(arr+i);
	}
	for(int i=0;i<=4;i++){
		cout<<*(arr+i)<<" ";
	}
	cout<<endl;

	// for(int i=0;i<=n-1;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	// cout<<arr[0]<<endl;//3
	// cout<<&arr[0]<<endl;//0x..30
	// cout<<arr<<endl;//array ka name

	// cout<<arr[1]<<endl;//5
	// cout<<&arr[1]<<endl;



	
	return 0;
}