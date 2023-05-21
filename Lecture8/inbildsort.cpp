#include<iostream>
using namespace std;
int main(){
	// int arr[]={3,5,2,1,4};
	int arr[]={3,5,2,3,2,4,2,1,1,3,1,4};
	int n=sizeof(arr)/sizeof(int);

	// sort(arr,arr+n);
	sort(arr,arr+n);

	// syntax: sort(arrayname,arrayname+numberofelements);

	// ARRAY PRINT
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	return 0;
}