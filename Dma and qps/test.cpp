#include<iostream>
using namespace std;
int main(){
	// sma
	int c;
	c=90;
	int *ptr=new int;
	*ptr=90;
	cout<<*ptr<<endl;

	delete ptr;
	ptr=NULL;



	// 1d array
	int *arr=new int[100];
	for (int i = 0; i <5; ++i)
	{
		cin>>arr[i];
	}

	for (int i = 0; i <5; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;


	delete[] arr;
	arr=NULL;








	
	

	return 0;
}