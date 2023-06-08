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
void append(char arr1[100],char arr2[100]){
	int j=0;
	int i=lengthofarr(arr1);
	while(j<=lengthofarr(arr2)){
		arr1[i]=arr2[j];
	i++;
	j++;

	}

}
int main(){
	char arr1[100];
	char arr2[100];
	cin.getline(arr1,100);
	cin.getline(arr2,100);
	append(arr1,arr2);
	cout<<arr1<<endl;
	cout<<arr2<<endl;



	return 0;
}