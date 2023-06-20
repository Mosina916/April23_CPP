#include<iostream>
using namespace std;
void multiply(int arr[1000],int m,int &noopti){
	int carry=0;
	int j;
	for(j=0;j<noopti; j++){
		int tp=arr[j]*m+carry;
	arr[j]=tp%10;
	carry=tp/10;

	}
	while(carry>0){
		arr[j]=carry%10;
		carry=carry/10;
		j++;
		noopti++;
	}
	
}
void fact(int n){
	int arr[1000];
	arr[0]=1;
	int noopti=1;
	for(int m=1;m<=n;m++){
		multiply(arr,m,noopti);

	}

	for(int l=noopti-1;l>=0;l--){
		cout<<arr[l];
	}
	cout<<endl;
	

}
int main(){
	int n;
	cin>>n;
	fact(n);

	return 0;
}