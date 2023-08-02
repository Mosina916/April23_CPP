#include<iostream>
#include<string>
#include <cctype>
using namespace std;
void stringtoggle(string inp,int i,string ans){
	// base case
	if(i==inp.length()){
		cout<<ans<<endl;
		return;
	}


	// rec case
	if(inp[i]>='0' and inp[i]<='9'){
		stringtoggle(inp,i+1,ans+inp[i]);
	}
	else{
		if(isupper(inp[i])){
			char x=inp[i]+32;
			stringtoggle(inp,i+1,ans+x);
		stringtoggle(inp,i+1,ans+inp[i]);
		}
		else{
			char x=inp[i]-32;
			stringtoggle(inp,i+1,ans+inp[i]);
		stringtoggle(inp,i+1,ans+x);

		}

		

	}

}

int main(){
	string s;
	cin>>s;
	stringtoggle(s,0,"");
	



	return 0;
}