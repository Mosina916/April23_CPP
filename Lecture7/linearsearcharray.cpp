#include<iostream>
using namespace std;
int main(){

	int arr[1000];
	int n;
	cin>>n;//6
	for(int i=0;i<=n-1;i=i+1){
		cin>>arr[i];

	}//7 9 6 4 0 1
	int key;
	cin>>key;//13


	// linear search
	int i;
	for(i=0;i<=n-1;i++){
		if(arr[i]==key){
		cout<<"key is present at index "<<i<<endl;
		break;
		// return 0;

	}

	}
	if(i==n){
		cout<<"key is not present"<<endl;
	}
	



// i/p
	

	

	return 0;
}