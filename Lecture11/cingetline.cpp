#include<iostream>
using namespace std;
int main(){
	int cou=0;
	char ch;
	char arr[100];
	int i=0;
	ch=cin.get();
	while(ch!='\n'){
		arr[i]=ch;
		i++;
		
		ch=cin.get();
	}
	arr[i]='\0';

	cout<<cou<<endl;
	



	return 0;
}