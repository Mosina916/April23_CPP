#include<iostream>
using namespace std;
void f(int &y){
	y=y+60;
	cout<<y<<endl;

}
int main(){
	
	int x=10;
	cout<<x<<endl;//10
	f(x);
	cout<<x<<endl;
	return 0;
}