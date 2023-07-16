#include<iostream> 
#include<cmath>
using namespace std;
string arr[]={" "," ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void phonekeypad(char inp[1000],int i,char out[1000],int j){//"23"
	// base cased
if(inp[i]=='\0'){
	out[j]='\0';
	cout<<out<<endl;
	return;
}
	// rec case
	char ch=inp[i];//'2'
	int index=ch-'0';//2
	for(int k=0;arr[index][k]!='\0';k++){
		out[j]=arr[index][k];
		phonekeypad(inp,i+1,out,j+1);

	}

}

int main(){

	char inp[1000];
	char out[1000];
	cin>>inp;//"23"
	phonekeypad(inp,0,out,0);
	


	return 0;
}