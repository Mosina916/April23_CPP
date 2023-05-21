#include<iostream>
using namespace std;
int main(){
	// int arr[]={3,5,2,1,4};
	int arr[]={3,5,2,3,2,4,2,1,1,3,1,4};
	int n=sizeof(arr)/sizeof(int);


	// selection sort

	for(int place=0;place<=n-2;place++){
		int minindex=place;
	for(int j=place+1;j<=n-1;j++){
		if(arr[j]<arr[minindex]){
		minindex=j;
	}
	

	}
	
	
	swap(arr[minindex],arr[place]);
}
	
	// ARRAY PRINT
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	return 0;
}