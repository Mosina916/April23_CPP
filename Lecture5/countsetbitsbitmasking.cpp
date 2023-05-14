#include<iostream>
#include <cmath>
using namespace std;
int main(){
	int no;
	cin>>no;//6
	int countsetbit=0;

	while(no>0){
		if((no&1)==1){
		countsetbit=countsetbit+1;
	}
	no=(no>>1);

	}

	cout<<countsetbit<<endl;
	




	return 0;
}