#include<iostream>
using namespace std;
int totalways(int i,int j){
	// base case
	if(i==0 and j==0){
		return 1;
	}
	// /rec case
	int ans=0;
	for(int k=0;k<i;k++){
		ans+=totalways(k,j);
	}

	for(int l=0;l<j;l++){
		ans+=totalways(i,l);
	}

	return ans;

}
int totalwaystd(int i,int j,int arr[100][100]){
	// base case
	if(i==0 and j==0){
		return arr[i][j]=1;
	}
	if(arr[i][j]!=-1){
		return arr[i][j];
	}
	// /rec case
	int ans=0;
	for(int k=0;k<i;k++){
		ans+=totalwaystd(k,j,arr);
	}

	for(int l=0;l<j;l++){
		ans+=totalwaystd(i,l,arr);
	}

	return arr[i][j]=ans;

}

int bottomup(int i,int j){
	int arr[100][100];

	for(int k=0;k<=i;k++){
		for(int l=0;l<=j;l++){
		if(k==0 and l==0){
		arr[k][l]=1;
	}
	else {
		int ans=0;
		for(int p=l-1;p>=0;p--){
			ans+=arr[k][p];

		}
		for(int m=k-1;m>=0;m--){
			ans+=arr[m][l];
		}
		arr[k][l]=ans;

	} 

	}

	}

		for (int k = 0; k <=i;k++)
	{
		for(int l=0;l<=j;l++){
			cout<<arr[k][l]<<" ";
		}

		cout<<endl;
	}
	cout<<endl;



	return arr[i][j];
	

	
}

int main(){

	int i,j;

	cin>>i>>j;

	cout<<bottomup(i,j)<<endl;
	// cout<<totalways(i,j)<<endl;
	// int arr[100][100];
	// for (int i = 0; i <100; ++i)
	// {
	// 	for(int j=0;j<100;j++){
	// 		arr[i][j]=-1;
	// 	}
	// }
	// cout<<totalwaystd(i,j,arr)<<endl;

	// for (int k = 0; k <=i;k++)
	// {
	// 	for(int l=0;l<=j;l++){
	// 		cout<<arr[k][l]<<" ";
	// 	}

	// 	cout<<endl;
	// }

	




	
	return 0;
}