#include<iostream>
using namespace std;
int main(){
	int arr[1000000];
	int n;
	cin>>n;//
	for(int i=0;i<=n-1;i=i+1){
		cin>>arr[i];
	}//1 3 4 5 6 7 9 10
	int target;
	cin>>target;
	int i=0;
	int j=n-1;
	while(i<j){
		if(arr[i]+arr[j]==target){
			cout<<arr[i]<<" "<<arr[j]<<endl;
			i++;
			j--;
		}
		else if(arr[i]+arr[j]>target){
			j--;
		}
		else{
			i++;
		}
	}

	


	
	return 0;
}