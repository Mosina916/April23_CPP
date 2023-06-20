#include<iostream>
using namespace std;
int main(){
	// int arr[]={3,-5,6,2,-6,7};
	int arr[]={-2,-3,-1,-9,-6};
	int n=sizeof(arr)/sizeof(int);
	int cs=0;
	int ms=INT_MIN;
	for(int i=0;i<=n-1;i++){
		cs=cs+arr[i];
		ms=max(ms,cs);
		if(cs<0){
			cs=0;
		}

	}

	cout<<ms<<endl;


	

	return 0;
}