// 1
// 12
// 123
// 1234
#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;

	int r=1;
	while(r<=tr){
		// for 4th row

	int i=1;
	int stno=1;
	while(i<=r){
		// cout<<'*';
		cout<<stno;
		stno=stno+1;
		i=i+1;
	}
	cout<<endl;

	r=r+1;

	}




	return 0;
}