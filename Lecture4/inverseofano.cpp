#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int no;
	cin>>no;
	int place=1,ans=0;
	while(no>0){
		int ld=no%10;
		ans=ans+place*pow(10,ld-1);
		place=place+1;
		no=no/10;
	}

	cout<<ans<<endl;
	

	return 0;
}