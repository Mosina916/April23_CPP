#include<iostream>
#include<cmath>
using namespace std;
#define ll long long int 
int main() {
	int n1,n2;
	int ans;
	cin>>n1>>n2;//16 24
	int pa=min(n1,n2);//16
	int i=2;
	while(i<=pa){
		
	if(n1%i==0 and n2%i==0){
		ans=i;//2
	}
	i=i+1;

	}
	cout<<ans<<endl;
	


	return 0;
}