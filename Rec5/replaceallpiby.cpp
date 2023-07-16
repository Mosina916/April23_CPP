#include<iostream>
using namespace std;
// ppisaipipf  -->p3.14sai3.14pf

	// piipisaipipf  -->3.14i3.14sai3.14pf

string replacepi(string s){ //'f'
	// base case
	if(s.length()<=1){
		return s;
	}
	


	// rec case
	string cs=s.substr(0,2);//"pi" "pp"

	if(cs=="pi"){
		return "3.14"+replacepi(s.substr(2));
	}
	else{
		return s[0]+replacepi(s.substr(1));
	}



}



int main(){//start

	string s;
	getline(cin,s);
	cout<<replacepi(s)<<endl;

	// ppisaipipf  -->p3.14sai3.14pf

	// piipisaipipf  -->3.14i3.14sai3.14pf

	
	return 0;//end
}