#include <iostream>
using namespace std;

int main(){
	int a=10;
	float b=78.8;
	bool x=true;
	double d=89.34543;

	// cout<<a<<endl;//10
	// cout<<b<<endl;//
	// cout<<x<<endl;
	// cout<<d<<endl;

	// cout<<sizeof(a)<<endl;//4
	// cout<<sizeof(b)<<endl;//
	// cout<<sizeof(x)<<endl;
	// cout<<sizeof(d)<<endl;

	// cout<<&a<<endl;//10
	// cout<<&b<<endl;//
	// cout<<&x<<endl;
	// cout<<&d<<endl;
	int*ptr=&a;//single
	int**xptr=&ptr;//double
	int***bptr=&xptr;//triple pointer
	// cout<<ptr<<endl;
	// cout<<xptr<<endl;
	// cout<<bptr<<endl;


	cout<<*(*(*bptr))<<endl;


	// double*dptr=&d;

	// cout<<ptr<<endl;
	// cout<<&a<<endl;

	// cout<<dptr<<endl;
	// cout<<&d<<endl;

	// cout<<sizeof(ptr)<<endl;
	// cout<<sizeof(dptr)<<endl;


	


	return 0;
}