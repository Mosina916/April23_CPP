#include<iostream>
using namespace std;
int main(){
	int arr[]={5,4,3,2,1};
	// int arr[]={5,4,2,6,7,2,2,1,1,8,8,4,4,3,2,1};
	// int arr[]={5,1,2,3,4};
	int n=sizeof(arr)/sizeof(int);


	for(int times=1;times<=n-1;times++){
		cout<<times<<endl;
		for(int j=0;j<=n-times-1;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}
	// 1 2 3 4 5

	}

	

	// ARRAY PRINT
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	return 0;
}