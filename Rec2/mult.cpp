#include<iostream>
using namespace std;
int multxn(int x,int n){//3 0
	if(n==0){
		return 0;
	}

	// rec 
	return x+multxn(x,n-1);

}
int main(){
	int x,n;
	cin>>x>>n;//3 5
	cout<<multxn(x,n)<<endl;


	return 0;
}