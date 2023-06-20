#include<iostream>
using namespace std;
int main(){
	int arr[]={3,-5,6,2,-6,7};
	int n=sizeof(arr)/sizeof(int);
	int mi,mj,maxsum=INT_MIN;
	for(int i=0;i<=n-1;i++){
		for(int j=i;j<=n-1;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum=sum+arr[k];
			}
			if(sum>maxsum){
				maxsum=sum;
				mi=i;
				mj=j;
			}
		}
	}

	cout<<maxsum<<endl;
	for(int l=mi;l<=mj;l++){
		cout<<arr[l]<<" ";
	}
	cout<<endl;


	return 0;
}