#include<iostream>
using namespace std;
void spiralprint(int arr[10][10],int tr,int tc){

	int sr=0;
	int er=tr-1;
	int sc=0;
	int ec=tc-1;

	while(sc<=ec and sr<=er){
		for(int i=sc;i<=ec;i++){
			cout<<arr[sr][i]<< ',' <<" ";
		}
		sr++;

		for(int j=sr;j<=er;j++){
			cout<<arr[j][ec]<< ',' <<" ";
		}
		ec--;

		if(sr<=er){
			for(int l=ec;l>=sc;l--){
				cout<<arr[er][l]<< ',' <<" ";
			}
		}
		er--;

		if(sc<=ec){
			for(int k=er;k>=sr;k--){
				cout<<arr[k][sc]<< ',' <<" ";
			}
		}
		sc++;
	}
}

int main(){
	int arr[10][10];
	int m,n; cin >> m >> n;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin >> arr[i][j];
		}
	}

	spiralprint(arr,m,n);
	cout << "END";
	

	return 0;
}