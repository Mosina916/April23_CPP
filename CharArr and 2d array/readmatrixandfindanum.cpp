#include <iostream>
using namespace std;
bool findinamatrix(int arr[3][4],int tr,int tc,int key){

	for(int i=0;i<=tr-1;i++){
		for(int j=0;j<=tc-1;j++){
		if(arr[i][j]==key){

			cout<<key<<" is present at index "<<i<<" "<<j<<endl;
			return true;

	}
	}

	}
	
	return false;
}
int main(){
	
	int arr[3][4]={
		{3,5,2,6},
		{7,5,1,7},
		{17,9,2,1}
	};

	int tr=3;
	int tc=4;
	int key;

	cin>>key;//9
	if(findinamatrix(arr,tr,tc,key)==false){
		cout<<"key is not present"<<endl;

	}






	return 0;
}