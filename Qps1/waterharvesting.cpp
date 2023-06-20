#include<iostream>
using namespace std;
int height[1000000];
int ls[1000000];
int rs[1000000];
int main(){
	int t;
	cin>>t;
	while(t--){
		
	int n;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		cin>>height[i];
	}
// 	6
// 3  0  0  2  0  4
	
	ls[0]=height[0];
	for(int i=1;i<=n-1;i++){
		ls[i]=max(ls[i-1],height[i]);
	}
	
	rs[n-1]=height[n-1];
	for(int i=n-2;i>=0;i--){
		rs[i]=max(rs[i+1],height[i]);
	}

	int water=0;
	for(int k=0;k<=n-1;k++){
		water=water+min(ls[k],rs[k])-height[k];
	}

	cout<<water<<endl;

	}
	



	return 0;
}