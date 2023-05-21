#include<iostream>
using namespace std;
int main(){
	// int arr[]={3,5,2,1,4};
	int arr[]={2,3,3,3,1,5,6,7,8,6,6,5,4,3,3};
	
	int n=sizeof(arr)/sizeof(int);
	int i;
	for(int j=1;j<=n-1;j++){
		int ele=arr[j];
		for(i=j-1;i>=0;i--){
			if(arr[i]>ele){
				arr[i+1]=arr[i];
			}
			else{
				break;
			}
		}
		arr[i+1]=ele;
	}


	

	// syntax: sort(arrayname,arrayname+numberofelements);

	// ARRAY PRINT
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	return 0;
}