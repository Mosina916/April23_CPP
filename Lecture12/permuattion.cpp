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
bool permuattion(char arr1[100],char arr2[100]){
	if(lengthofarr(arr1)!=lengthofarr(arr2)){
		return false;
	}
	else{
		int freqarr[26]={0};
		for(int j=0;j<=lengthofarr(arr1)-1;j++){
			char ch=arr1[j];//'A'
		int index=ch-'A';//0
		freqarr[index]++;

		}


		// for 2nd arr
		for(int j=0;j<=lengthofarr(arr2)-1;j++){
			char ch=arr2[j];//'A'
		int index=ch-'A';//0//map 
		freqarr[index]--;

		}

		for(int i=0;i<=25;i++){
			if(freqarr[i]!=0){
				return false;
			}
		}
		return true;
		

	}
}
int main(){

	char arr1[100];
	cin.getline(arr1,100);
	char arr2[100];
	cin.getline(arr2,100);
	if(permuattion(arr1,arr2)){
		cout<<"it is a permuattion"<<endl;
	}
	else{
		cout<<"not a permuattion"<<endl;
	}

	// 'B'-'A';//66-65 1
	// 'C'-'A';2
	


	return 0;
}