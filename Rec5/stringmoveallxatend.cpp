#include<iostream>
using namespace std;
string moveallxatend(string s){
	// base case
	if(s.length()==0){
		return "";
	}


	// rec case
	char ch=s[0];//
	if(ch=='x'){
		return moveallxatend(s.substr(1))+ch;

	}
	else{
		return ch+moveallxatend(s.substr(1));

	}

}


int main(){//start

	string s;
	getline(cin,s);
	cout<<moveallxatend(s)<<endl;

	// pxbsaxxfxc

	// xbsaxxfxc-->pbsafcxxxx

	// xabsaxxfxc

	// absaxxfxc-->absafcxxx if ist is x last mai
	// pbsafcxxxx
 

	return 0;//end
}