#include <iostream>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		int arr[1000000];
	int n;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];//10 2 6 8 4

	}
	int tmdh;
	cin>>tmdh;

	// sort(arrayname,arrayname+totalele);
	sort(arr,arr+n);//2 4 6 8 10

	int i=0;
	int j=n-1;
	int x,y;


// loop
	while(i<j){
		if(arr[i]+arr[j]==tmdh){
		x=arr[i];//4
		y=arr[j];//6
		i++;
		j--;

	}
	else if(arr[i]+arr[j]>tmdh){
		j--;
		
	}
	else{
		i++;
	}

	}

	cout<<x<<" "<<y<<endl;
	


	}
	

	return 0;
}