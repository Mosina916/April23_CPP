#include<iostream>
using namespace std;
void spiralprint(int arr[4][5],int tr,int tc){
	// 
	int sr=0;
	int er=tr-1;
	int sc=0;
	int ec=tc-1;
	while(sc<=ec and sr<=er){
		// for ist row
	for(int i=sc;i<=ec;i++){
		cout<<arr[sr][i]<<" ";
	}
	sr++;
	// for last col
	for(int j=sr;j<=er;j++){
		cout<<arr[j][ec]<<" ";
	}
	ec--;
	if(sr<=er){
		// last row
	for(int l=ec;l>=sc;l--){
		cout<<arr[er][l]<<" ";
	}

	}
	
	er--;
	if(sc<=ec){
		// ist col
	for(int k=er;k>=sr;k--){
		cout<<arr[k][sc]<<" ";
	}

	}
	
	sc++;

	}
	




}
int main(){
	int arr[4][5]={
		{3,4,5,8,7},
		{8,9,2,4,1},
		{9,34,25,98,70},
		{12,13,67,45,90}
	};

	// int arr[6][3]={
	// 	{3,4,5},
	// 	{8,9,2},
	// 	{9,34,25},
	// 	{12,13,67},
	// 	{2,153,675},
	// 	{132,123,671}
	// };


	// spiralprint(arr,6,3);
	spiralprint(arr,4,5);
	

	return 0;
}