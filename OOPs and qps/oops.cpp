#include<iostream>

using namespace std;
class X{

public:
	string name;
	string colour;
	int seats;
	int tyre;
	// constructor
	// classname(){

	// }
	// // // defualt constor
	// X(){

	// 	// cout<<"hello"<<endl;

		
	// }
// parametrized
	// X(string n,string c,int t,int s){

	// 	name=n;
	// 	colour=c;
	// 	tyre=4;
	// 	seats=s;


		
	// }

};

int main(){
	// X p;//whenever object is varaible construtor is called
	// p.name="BMW";
	// p.colour="red";
	// p.seats=4;
	// p.tyre=4;
	// X p1;

	// X s("audi","white",5,8);
	X s;
	cout<<s.name<<endl;
	cout<<s.colour<<endl;
	cout<<s.seats<<endl;
	cout<<s.tyre<<endl;

	// cout<<p.name<<endl;
	// cout<<p.colour<<endl;
	// cout<<p.seats<<endl;
	// cout<<p.tyre<<endl;

	return 0;
}