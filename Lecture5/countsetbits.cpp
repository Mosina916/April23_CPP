#include<iostream>
#include <cmath>
using namespace std;
int main(){

	// convert dec to binary
	int no;
	int ans=0;
	int i=0;
	cin>>no;//6

	while(no>0){
		int rem=no%2;//0
	ans=rem*pow(10,i)+ans;

	no=no/2;//3
	i=i+1;


	}
	// ans-->110

	int setbitskacount=0;//2

	while(ans>0){
		int ld=ans%10;//-->1
	if(ld==1){
		setbitskacount=setbitskacount+1;
	}

	ans=ans/10;//1/10

	}


	cout<<setbitskacount<<endl;
	







	

	

	return 0;
}