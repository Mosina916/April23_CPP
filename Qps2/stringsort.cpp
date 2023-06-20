#include<iostream>
#include<string>
using namespace std;
// bool mycomp(int a,int b){ //4 6
// 	return a<b;
// }
bool mycomp(int a,int b){ //6 4
	return a>b;
}
int main(){
	string s;
	

	int arr[1000];
	// char arr[1000];
	int n;
	cin>>n;

	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];

	} // 6 4 3 5 1 0

	// 4 5 3 2 1 

	// sort(arr,arr+n);//inc order
	sort(arr,arr+n,mycomp);//dec sort-->comperator
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	return 0;

}
