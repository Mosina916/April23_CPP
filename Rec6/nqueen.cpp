#include<iostream>
using namespace std;
int c=0;
int board[100][100]={0};
bool kyahumqrshai(int i,int j,int n){
	// ver check
	for(int k=i-1;k>=0;k--){
		if(board[k][j]==1){
			return false;
		}
	}


	// /r dia
	int p=i-1;
	int q=j+1;
	while(p>=0 and q<n){
		if(board[p][q]==1){
			return false;
		}
		p--;
		q++;
	}

	// l dia
	int l=i-1;
	int m=j-1;
	while(l>=0 and m>=0){
		if(board[l][m]==1){
			return false;
		}
		l--;
		m--;
	}

	return true;
}
bool nqueen(int n,int i){
	// b case
	if(i==n){
		for(int l=0;l<n;l++){
			for(int m=0;m<n;m++){
				cout<<board[l][m]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		c++;
		return false;
	}

	// /rec case
	for(int j=0;j<n;j++){
		if(kyahumqrshai(i,j,n)){
		board[i][j]=1;
		if(nqueen(n,i+1)){
			return true;

		}
		board[i][j]=0;//backtracking

	}

	}
	return false;
	
}
int main(){
	int n;
	cin>>n;
	nqueen(n,0);


	cout<<c<<endl;

	return 0;
}