#include<iostream>
using namespace std;
int binaryserach(int arr[],int s,int e,int key){
	// base case
	if(s>e){
		return -100877;
	}

	
	// rec case
	int mid=(s+e)/2;
	if(arr[mid]==key){
		return mid;

	}
	else if(key>arr[mid]){
		return binaryserach(arr,mid+1,e,key);

	}
	else{
		return binaryserach(arr,s,mid-1,key);

	}
	

}
int main(){
	int arr[]={3,4,5,7,9,11};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;//5
	int x=binaryserach(arr,0,n-1,key);
	if(x<0){
		cout<<"key is not present"<<endl;
	}
	else{
		cout<<"key is  present at index "<<x<<endl;

	}

	//5 4 3 2 1
	

	

	

	return 0;
}