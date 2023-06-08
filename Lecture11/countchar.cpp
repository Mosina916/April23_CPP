#include<iostream>
using namespace std;
int main(){
	int cou=0;
	char ch;
	// cin>>ch;//A
	ch=cin.get();
	while(ch!='$'){
		cou++;
		// cin>>ch;
		ch=cin.get();
	}

	cout<<cou<<endl;
	



	return 0;
}