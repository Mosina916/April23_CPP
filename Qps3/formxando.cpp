#include<iostream>
using namespace std;
void spiralprint(char arr[100][100],int tr,int tc){
	// 
	int sr=0;
	int er=tr-1;
	int sc=0;
	int ec=tc-1;
	char ch='X';
	while(sc<=ec and sr<=er){
		// for ist row
	for(int i=sc;i<=ec;i++){
		arr[sr][i]=ch;
	}
	sr++;
	// for last col
	for(int j=sr;j<=er;j++){
		arr[j][ec]=ch;
	}
	ec--;
	
		// last row
	for(int l=ec;l>=sc;l--){
		arr[er][l]=ch;
	}

	
	
	er--;
	
		// ist col
	for(int k=er;k>=sr;k--){
		arr[k][sc]=ch;
	}

	
	
	sc++;
	if(ch=='X'){
		ch='O';
	}
	else{
		ch='X';
	}

	}

}
int main(){
	char arr[100][100];
	int tr,tc;
	cin>>tr>>tc;//7 7
	spiralprint(arr,tr,tc);
	for(int i=0;i<=tr-1;i++){
		for(int j=0;j<=tc-1;j++){
			cout<<arr[i][j]<<' ';
		}
		cout<<endl;
	}
	

	return 0;
}