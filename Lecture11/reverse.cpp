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
void copy(char arr1[100],char arr2[100]){
	int i=0;
	int j=0;
	while(i<=lengthofarr(arr1)){
		arr2[j]=arr1[i];
	i++;
	j++;

	}
	

	
}
void reverse(char arr1[100]){
	int i=0;
	int j=lengthofarr(arr1)-1;//4

	while(i<j){
		swap(arr1[i],arr1[j]);
	i++;
	j--;

	}
	

}
int main(){
	char arr1[100];
	
	cin.getline(arr1,100);//Hello
	
	
	reverse(arr1);//arr1 ko arr 2 mai copy karo
	cout<<arr1<<endl;



	return 0;
}