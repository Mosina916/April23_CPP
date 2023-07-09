#include<iostream>
using namespace std;
int stringtoint(string s,int l){
	// base  case
	if(l==0){
		return 0;
	}
	// rec case
	char ch=s[l-1];//'4'
	int x=ch-'0';//4
	return stringtoint(s,l-1)*10+x;
}
int main(){
	string s;
	getline(cin,s);//"3694"
	// cout<<s+100<<endl;
	int l=s.length();//4
	cout<<stringtoint(s,l)<<endl;
	



	return 0;
}