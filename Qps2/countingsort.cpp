#include<iostream>
#include<string>
using namespace std;
int main(){
	int arr[1000];
	int n;
	cin>>n;//23 assume no ki range 0 to 10

	int freq[100]={0};

	int no;
	int m=INT_MIN;
	for(int ti=1;ti<=n;ti++){
		cin>>no;//4
		m=max(m,no);
		freq[no]++;
	}
	for(int l=0;l<=m;l++){
		for(int c=1;c<=freq[l];c++){
		cout<<l<<" ";
	}


	}

	
	
	
	return 0;

}
