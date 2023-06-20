#include <iostream>
using namespace std;
bool staircase(int arr[4][4],int tr,int tc,int key){
	int i=0;
	int j=tc-1;
	while(i<=tr-1 and j>=0){
		if(arr[i][j]==key){
			cout<<key<<" is present at index "<<i<<" "<<j<<endl;
			return true;

	}
	else if(arr[i][j]<key){
		i++;

	}
	else{
		j--;
	}

	}
	return false;
	

}
int main(){
	
	int arr[4][4]={
		{2,5,6,9},
		{3,6,7,10},
		{5,13,17,20},
		{7,14,21,31}
	};

	int tr=4;
	int tc=4;
	int key;

	cin>>key;//21
	if(staircase(arr,tr,tc,key)==false){
		cout<<"key is not present"<<endl;

	}






	return 0;
}