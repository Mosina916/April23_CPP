#include<iostream>
using namespace std;
int powexn(int x,int n){//3 5
	if(n==1){
		return ;
	}

	// rec 
	return x*powexn(x,n-1);

}
int main(){
	int x,n;
	cin>>x>>n;//3 5
	if(x==0 and n==0){
		return 0;
	}
	cout<<powexn(x,n)<<endl;


	return 0;
}