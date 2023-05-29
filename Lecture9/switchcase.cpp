#include<iostream>
using namespace  std;
int main(){
	int marks;
	cin>>marks;
	
	if(marks>=90 and marks<=100){
		cout<<"grade A"<<endl;
	}
	else if(marks>=80 and marks<=89){
		cout<<"grade B"<<endl;
	}
	else if(marks>=70 and marks<=79){
		cout<<"grade C"<<endl;
	}
	else{
		cout<<"fail"<<endl;
	}
	// switch(marks){
	// 	case marks>=90 and marks<=100
	// }

	// switch(x){
	// 	case 1: cout<<"hello";
	// }

	// char ch;
	// cin>>ch;

	// if(ch=='A'){
	// 	cout<<"Apple"<<endl;
	// }
	// else if(ch=='B'){
	// 	cout<<"Boy"<<endl;
	// }
	// else if(ch=='C'){
	// 	cout<<"Cat"<<endl;
	// }
	// else if(ch=='D'){
	// 	cout<<"Dog"<<endl;
	// }
	// else{
	// 	cout<<"invalid char"<<endl;
	// }


	// switch(varibale){
	// 	case v 
	// }
	char ch;
	cin>>ch;
	switch(ch){
		case 'A':cout<<"Apple"<<endl;
		break;
		case 'B':cout<<"Boy"<<endl;
		break;
		case 'C':cout<<"cat"<<endl;
		break;
		case 'D':cout<<"Dog"<<endl;
		break;
		default:cout<<"invalid char"<<endl;
	}


	return 0;
}