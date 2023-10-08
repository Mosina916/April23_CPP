#include<iostream>
using namespace std;
int maxprofit(int *price,int l,int r,int day){
	// base case
	if(l>r){
		return 0;
	}


	// REC case
	int op1=price[l]*day+maxprofit(price,l+1,r,day+1);
	int op2=price[r]*day+maxprofit(price,l,r-1,day+1);
	return max(op1,op2);
}
// td

int maxprofittd(int *price,int l,int r,int day,int arr[100][100]){
	// base case
	if(l>r){
		return arr[l][r]=0;
	}
	if(arr[l][r]!=-1){
		return arr[l][r];
	}


	// REC case
	int op1=price[l]*day+maxprofittd(price,l+1,r,day+1,arr);
	int op2=price[r]*day+maxprofittd(price,l,r-1,day+1,arr);
	return arr[l][r]=max(op1,op2);
}

// bottom up
int bottomup(int *price, int n){
	// base case
	int arr[100][100]={0};
	// diagonal fill
	for(int l=0;l<n;l++){
		arr[l][l]=n*price[l];
	}

	for(int i=n-2;i>=0;i--){
		for(int j=0;j<n;j++){
			if(j>i){
		int day=n-(j-i);
		int op1=price[i]*day+arr[i+1][j];
		int op2=price[j]*day+arr[i][j-1];
		arr[i][j]=max(op1,op2);


	}

		}
	}

	// print
	 for (int i = 0; i <n; ++i)
	{
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<'\t';
		}
		cout<<endl;
	}
	cout<<endl;

	return arr[0][n-1];
	

}
int main(){
	int price[]={2,3,5,1,4};
	int n=sizeof(price)/sizeof(int);
	cout<<maxprofit(price,0,n-1,1)<<endl;

	cout<<bottomup(price,n)<<endl;

	// int arr[100][100];
	// for (int i = 0; i <100; ++i)
	// {
	// 	for(int j=0;j<100;j++){
	// 		arr[i][j]=0;
	// 	}
	// }

	// cout<<maxprofittd(price,0,n-1,1,arr)<<endl;

	// for (int i = 0; i <n; ++i)
	// {
	// 	for(int j=0;j<n;j++){
	// 		cout<<arr[i][j]<<'\t';
	// 	}
	// 	cout<<endl;
	// }

	
	return 0;
}