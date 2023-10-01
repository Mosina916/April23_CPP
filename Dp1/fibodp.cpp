#include<iostream>
using namespace std;
int fibo(int n){
	// base case
	if(n==0||n==1){
		return n;
	}
	
	// rec case 
	return fibo(n-1)+fibo(n-2);
}
int tdfibo(int n,int *arr){
	// base case
	if(n==0||n==1){
		return arr[n]=n;
	}

	if(arr[n]!=-1){
		return arr[n];
	}
	
	// rec case 
	return  arr[n]=tdfibo(n-1,arr)+tdfibo(n-2,arr);
}

int bottomup(int n){
	int *arr=new int[n+1];
	arr[0]=0;
	arr[1]=1;

	for(int i=2;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}


	for (int i = 0; i <=n; ++i)
	{

		cout<<arr[i]<<" ";
	}
	cout<<endl;


	return arr[n];
	


}
int main(){
	int pos;
	cin>>pos;//5

	

	int *arr=new int[pos+1];
	for (int i = 0; i <=pos; ++i)
	{

		arr[i]=-1;

	}

	cout<<tdfibo(pos,arr)<<endl;//o(n)

	for (int i = 0; i <=pos; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;


	cout<<bottomup(pos)<<endl;

	cout<<fibo(pos)<<endl;//2^n

	// memset(arr,2,sizeof(arr))

	
	return 0;
}