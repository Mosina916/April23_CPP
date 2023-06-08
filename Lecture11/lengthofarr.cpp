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
int main(){
	char arr[100];
	cin.getline(arr,100);

	cout<<"length of arr is "<<lengthofarr(arr)<<endl;



	return 0;
}