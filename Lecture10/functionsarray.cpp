#include <iostream>
using namespace std;
void update(int b[],int n){
	for(int i=0;i<=n-1;i++){
		b[i]=b[i]+10;

	}

	// print arr
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;



	

}
int main(){
	int arr[]={3,5,7,8,2};//13 15 17..
	int n=sizeof(arr)/sizeof(int);\
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";//3,5,7,8,2
	}
	cout<<endl;//
	update(arr,n);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";//3,5,7,8,2
	}
	cout<<endl;//




	return 0;
}