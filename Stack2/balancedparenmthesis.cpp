#include<iostream>
#include<stack>
using namespace std;
bool isbalaned(char arr[100]){
	stack<char> s;
	for(int i=0;arr[i]!='\0';i++){
		char ch=arr[i];//(
	switch(ch){
		case '(':
		case '{':
		case '[':s.push(ch);
		break;
		case ')':if(!s.empty() and s.top()=='('){
			s.pop();
		}
		else{
			return false;
		}
		break;
		case '}':if(!s.empty() and s.top()=='{'){
			s.pop();
		}
		else{
			return false;
		}
		break;
		case ']':if(!s.empty() and s.top()=='['){
			s.pop();
		}
		else{
			return false;
		}
		
		

	}
	





	}

	if(s.empty()==true){
		return true;
	}
	else{
		return false;
	}






}
int main(){
	char arr[100]="(()){[()]";
	if(isbalaned(arr)==true){
		cout<<"balanced"<<endl;

	}
	else{
		cout<<"not balanced"<<endl;
	}
	
	// (a+(k+[g-{f*{e+{d-(b+c)}}}])}
	// (a+(k+[g-{f*{e+{d-(b+c)}}}]))



	return 0;

}