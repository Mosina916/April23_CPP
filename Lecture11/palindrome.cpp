#include<iostream>
using namespace std;
int lengthofarr(char arr[100]){
	int l=0;
	int i=0;
	while(arr[i]!='\0'){
		l++;
	i++;

	}
	return l;
}
bool checkpalin(char arr[100]){
	int i=0;
	int j=lengthofarr(arr)-1;//4
	while(i<j){
		if(arr[i]==arr[j]){
		i++;
		j--;
	}
	else{
		return false;
	}


	}
	return true;
	
}
int main(){
	char arr[100];
	cin.getline(arr,100);

	if(checkpalin(arr)){
		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"not palindrome"<<endl;

	}



	return 0;
}