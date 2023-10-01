#include<iostream>
using namespace std;
int minstepsto1(int n){
	// base case
	if (n==1)
	{
		return 0;
	}
	// rec case
	int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	x=minstepsto1(n-1);
	if(n%2==0){
		y=minstepsto1(n/2);
	}
	if(n%3==0){
		y=minstepsto1(n/3);
	}
	return min(x,min(y,z))+1;
}

int c=0;

int tdminstepsto1(int n,int *arr){
	c++;
	// base case
	if (n==1)
	{
		return arr[n]=0;
	}
	if(arr[n]!=-1){
		return  arr[n];
	}
	// rec case
	int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	
	if(n%2==0){
		
		y=tdminstepsto1(n/2,arr);
	}


	if(n%3==0){

		y=tdminstepsto1(n/3,arr);
	}
	x=tdminstepsto1(n-1,arr);

	

	return arr[n]=min(x,min(y,z))+1;
}


int bottomup(int n){
	int *arr=new int[n+1];
	arr[1]=0;
	for(int i=2;i<=n;i++){
		int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	x=arr[i-1];//1
	if(i%2==0){
		y=arr[i/2];//0
	}
	if(i%3==0){
		y=arr[i/3];//0
	}
	arr[i]=min(x,min(y,z))+1;


	}

	for (int i = 0; i <=n; ++i)
	{
		cout<<arr[i]<<' ';
	}

	cout<<endl;
	return arr[n];
		
}
int main(){
	int n;
	cin>>n;//28
	// minstepsto1(n);

	int *arr=new int[n+1];
	for (int i = 0; i <=n; ++i)
	{
		arr[i]=-1;
	}

	cout<<tdminstepsto1(n,arr)<<endl;

	// for (int i = 0; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;


	// cout<<bottomup(n)<<endl;

	cout<<c<<endl;

	
	return 0;
}