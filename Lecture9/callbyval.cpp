#include<iostream>
using namespace std;
void f(int x){
	x=x+60;
	cout<<x<<endl;

}
int main(){
	
	int x=10;
	cout<<x<<endl;//10
	f(x);
	cout<<x<<endl;
	return 0;
}