// 1
// 23
// 456
// ****
#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;
	int stno=1;
	int r=1;
	while(r<=tr){
		// for 4th row

	int i=1;
	
	while(i<=r){
		// cout<<'*';
		cout<<stno<<'\t';
		stno=stno+1;
		i=i+1;
	}
	cout<<endl;

	r=r+1;

	}




	return 0;
}