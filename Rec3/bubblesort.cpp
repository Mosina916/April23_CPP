#include<iostream>
using namespace std;
void bubblesortrec(int arr[],int n,int times){
	// base case
	if(times==n){
		return;
	}
	// rec case
	for(int j=0;j<=n-times-1;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}
	//4 3 2 1 5
	bubblesortrec(arr,n,times+1);

}
int main(){
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);
	bubblesortrec(arr,n,1);

	//5 4 3 2 1
	

	

	// ARRAY PRINT
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	return 0;
}