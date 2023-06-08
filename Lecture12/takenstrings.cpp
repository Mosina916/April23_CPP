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

void copy(char arr1[100],char arr2[100]){
	int i=0;
	int j=0;
	while(i<=lengthofarr(arr1)){
		arr2[j]=arr1[i];
	i++;
	j++;

	}
	
}

int main(){
	int n;
	cin>>n;//4
	cin.ignore();

	char arr[100];
	cin.getline(arr,100);//board
	char maxarr[100];
	copy(arr,maxarr);//board
	int maxl=lengthofarr(arr);//5


	for(int i=1;i<=n-1;i++){
		cin.getline(arr,100);//elephant
	if(lengthofarr(arr)>maxl){
		maxl=lengthofarr(arr);
		copy(arr,maxarr);

	}

	}

	cout<<"max array is "<<maxarr<<endl;
	cout<<"max len is "<<maxl<<endl;

	



	return 0;
}