#include<iostream>
using namespace std;
// simple rec 
int mincoinsneeded(int coins[],int amount,int n){
	// base case
	if(amount==0){
		return 0;
	}

	// rec case
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		int bachaamountfr=amount-coins[i];//7
	if(bachaamountfr>=0){
		int cfba=mincoinsneeded(coins,bachaamountfr,n);
		if(cfba<ans){
			ans=cfba+1;
		}
	}

	}

	return ans;

}

// td approach
int mincoinsneededtd(int coins[],int amount,int n,int *arr){
	// base case
	if(amount==0){
		return arr[amount]=0;
	}

	if(arr[amount]!=INT_MAX){
		return arr[amount];
	}
	// rec case
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		int bachaamountfr=amount-coins[i];//7
	if(bachaamountfr>=0){
		int cfba=mincoinsneededtd(coins,bachaamountfr,n,arr);
		if(cfba!=INT_MAX and cfba<ans){
			ans=cfba+1;
		}
	}

	}

	return arr[amount]=ans;

}

// bottomup 

int bottomup(int *coins,int n,int amount){//9 6 5 4 
	int *arr=new int[amount+1];

	arr[0]=0;
	for(int i=1;i<=amount;i++){
		arr[i]=INT_MAX;
	}

	for(int curramount=1;curramount<=amount; curramount++){
		for(int i=0;i<n;i++){
		int bachamount=curramount-coins[i];//1
	if(bachamount>=0){
		arr[curramount]=min(arr[curramount],arr[bachamount]+1);

	}

	}
		
	}

	for (int i = 0; i <=amount; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;
	
	return arr[amount];



}

int main(){
	int amount;
	cin>>amount;//b
	int coins[]= {9, 6, 5, 4};
	int n=sizeof(coins)/sizeof(int);
	cout<<mincoinsneeded(coins,amount,n)<<endl;


	cout<<bottomup(coins,n,amount)<<endl;

	// int *arr=new int[amount+1];
	// for (int i = 0; i <=amount; ++i)
	// {
	// 	arr[i]=INT_MAX;
	// }

	// cout<<mincoinsneededtd(coins,amount,n,arr)<<endl;

	// for (int i = 0; i <=amount; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;
	
	return 0;
}