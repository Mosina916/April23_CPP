#include<iostream>
using namespace std;
bool isarraysorted1(int arr[],int n){
	// base case
	if(n==1){
		return true;

	}
	// rec case
	// return isarraysorted1(arr+1,n-1) and arr[0]<=arr[1];
	return  arr[0]<=arr[1] and isarraysorted1(arr+1,n-1);

}
bool isarraysorted2(int arr[],int n){ //4
// base case
	if(n==1){
		return true;
	}
	// return n==1;


	// rec case
	// return isarraysorted2(arr,n-1) and arr[n-2]<=arr[n-1];
	 return arr[n-2]<=arr[n-1] and isarraysorted2(arr,n-1);

}
bool isarraysorted3(int arr[],int n,int i){
	// base case
	if(i==n-1){
		return true;
	}


	// rec case
	return arr[i]<=arr[i+1] and isarraysorted3(arr,n,i+1);

}
int main(){
	int arr[]={4,5,6,3,3,6,3,2,6,7,8};
	int n=sizeof(arr)/sizeof(int);
	if(isarraysorted1(arr,n)){
		cout<<"array is sorted"<<endl;

	}
	else{
		cout<<"array is not sorted"<<endl;

	}

	if(isarraysorted2(arr,n)){
		cout<<"array is sorted"<<endl;

	}
	else{
		cout<<"array is not sorted"<<endl;

	}
	if(isarraysorted3(arr,n,0)){
		cout<<"array is sorted"<<endl;

	}
	else{
		cout<<"array is not sorted"<<endl;

	}



	return 0;
}