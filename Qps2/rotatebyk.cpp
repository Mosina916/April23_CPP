#include<iostream>
#include<cmath>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int k;
	cin>>k;//3
	k=k%s.length();
	// codingblocks  --> ckscodingblo

	cout<<s.substr(s.length()-k)+s.substr(0,s.length()-k)<<endl;
	// s.substr(9)

	
	
	return 0;

}
