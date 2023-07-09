#include<iostream>
#include<cmath>
using namespace std;
int digitsco(int n){
	int c=0;
	while(n>0){
		n=n/10;
		c++;
	}
	return c;
}
int main(){
	int arr[1000];
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for (int i = 0; i <n; ++i)
		{
			cin>>arr[i];
		}



	for(int times=1;times<=n-1;times++){
		
		for(int j=0;j<=n-times-1;j++){
			int x=arr[j];
			int y=arr[j+1];
			long long int no1=x*pow(10,digitsco(y))+y;
			long long int no2=y*pow(10,digitsco(x))+x;
		if(no1>no2){
			swap(arr[j],arr[j+1]);
		}
	}

	}
	// ARRAY PRINT
	for(int i=n-1;i>=0;i--){
		cout<<arr[i];
	}
	cout<<endl;

	}

	



	return 0;
}