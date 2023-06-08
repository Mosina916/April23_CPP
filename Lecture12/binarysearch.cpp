#include<iostream>
using namespace std;
bool binarysearch(int arr[],int s,int e,int ele){

	while(s<=e){
		int mid=(s+e)/2;
	if(arr[mid]==ele){
		cout<<"ele is present at index "<<mid<<endl;
		return true;
	}
	else if(ele>arr[mid]){
		s=mid+1;
	}
	else{
		e=mid-1;
	}

	}
	return false;
	

}
int main(){
	int arr[]={1,3,5,6,7,9,10};
	int n=sizeof(arr)/sizeof(int);
	int ele;
	cin>>ele;
	if(binarysearch(arr,0,n-1,ele)==false){
		cout<<"ele is not present"<<endl;
	}


	return 0;
}