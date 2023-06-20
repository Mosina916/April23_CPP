#include<iostream>
#include<algorithm>
using namespace std;
int arr1[100000];
int arr2[100000];
int arr3[100000];
int main(){
	int n;
	cin>>n;
// 	7
// 1 2 3 1 2 4 1
// 2 1 3 1 5 2 2
	for (int i = 0; i <n; ++i)
	{
		cin>>arr1[i];
	}
	for (int i = 0; i <n; ++i)
	{
		cin>>arr2[i];
	}
	int k=0;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr1[i]==arr2[j]){
				arr3[k]=arr1[i];
				k++;
				arr2[j]=INT_MIN;
				break;

			}
		}
	}

	sort(arr3,arr3+k);
	cout<<'[';
	for (int i = 0; i <=k-2; ++i)
	{
		cout<<arr3[i]<<", ";
	}
	cout<<arr3[k-1]<<']'<<endl;
	


	
	return 0;

}
