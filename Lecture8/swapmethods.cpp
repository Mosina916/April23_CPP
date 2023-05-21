#include<iostream>
using namespace std;
int main(){
	// int arr[]={5,1,2,3,4};
	// int arr[]={5,4,3,2,1};
	int arr[]={5,4,1,2,3};
	
	int n=sizeof(arr)/sizeof(int);


	for(int times=1;times<=n-1;times++){
		// cout<<times<<endl;
		bool kyaswaphuva=false;
		for(int j=0;j<=n-times-1;j++){
		if(arr[j]>arr[j+1]){
			// swap using 3rd variable
			// int c=arr[j+1];
			// arr[j+1]=arr[j];
			// arr[j]=c;
			// swap without 3rd varible

			// arr[j+1]=arr[j]+arr[j+1];
			// arr[j]=arr[j+1]-arr[j];
			// arr[j+1]=arr[j+1]-arr[j];

			// swap in on line
			// arr[j+1]=(arr[j]+arr[j+1])-(arr[j]=arr[j+1]);

			// inbuild
			swap(arr[j],arr[j+1]);

			kyaswaphuva=true;
		}
	}
	if(kyaswaphuva==false){
		break;
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