#include<iostream>
using namespace std;
int main(){
	int ts=0;
	int n;
	while(ts>=0){
		cin>>n;
		ts=ts+n;
		if(ts>=0){
			cout<<n<<endl;

		}
		else{
			return 0;
		}
	}


	return 0;
}