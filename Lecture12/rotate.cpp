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
void rotatebynchar(char arr[100],int n){//codingblocks

	int orgl=lengthofarr(arr);//12
	int j=orgl;
	while(j>=0){
		arr[j+n]=arr[j];
	j--;


	}
	// codcodingblocks
	int k=0;
	int i=orgl;

	for(int l=1;l<=n;l++){
		swap(arr[i],arr[k]);
	k++;
	i++;

	}

	// ckscodingblocod
	arr[orgl]='\0';
	

	

}
int main(){
	int n;
	cin>>n;//4
	cin.ignore();
	char arr[100];
	cin.getline(arr,100);//cat
	// rotatebynchar(arr,n);

	int actualro=n%lengthofarr(arr);//
	rotatebynchar(arr,actualro);

	cout<<arr<<endl;
	



	return 0;
}