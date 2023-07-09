#include<iostream>
using namespace std;
// bool iskeypresentornot(int arr[],int n,int key){
// 	// base case
// 	if(n==0){
// 		return false;
// 	}

// 	// rec case
// 	if(arr[0]==key){
// 		return true;
// 	}
// 	return iskeypresentornot(arr+1,n-1,key);

// }

//  int lastindexkey(int arr[],int n,int i,int key){
// 	// base case
// 	if(i==-1){
// 		return -10;
// 	}

// 	// rec case
// 	if(arr[i]==key){
// 		return i;
// 	}
// 	return lastindexkey(arr,n,i-1,key);

// }

void allindicesofkey(int arr[],int i,int key,int n){
	// base case
	if(i==n){
		return;
	}

	// rec case
	if(arr[i]==key){
		cout<<i<<" ";
	}
	allindicesofkey(arr,i+1,key,n);

}
int main(){
	int arr[]={7,6,7,9,7,3,4,7,8};//2 4 7
	int n=sizeof(arr)/sizeof(int);
	int key;//7
	cin>>key;
	allindicesofkey(arr,0,key,n);
	
	// int x=lastindexkey(arr,n,n-1,key);
	// if(x>=0){
	// 	cout<<"key is present at index "<<x<<endl;


	// }
	// else{
	// 	cout<<"key is not present"<<endl;
	// }
	// int x=firstindexkey(arr,n,0,key);
	// if(x>=0){
	// 	cout<<"key is present at index "<<x<<endl;


	// }
	// else{
	// 	cout<<"key is not present"<<endl;
	// }
	// if(iskeypresentornot(arr,n,key)){
	// 	cout<<"key is present"<<endl;

	// }
	// else{
	// 	cout<<"key is not present"<<endl;
	// }



	return 0;
}