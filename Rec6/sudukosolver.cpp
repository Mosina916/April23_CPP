#include<iostream> 
#include<cmath>
using namespace std;
bool kyamainumijpedsh(int i,int j,int num,int mat[9][9],int n){
	// ver check

	for(int l=0;l<n;l++){
		if(mat[l][j]==num){
			return false;
		}
	}


	// hor check

	for(int m=0;m<n;m++){
		if(mat[i][m]==num){
			return false;
		}
	}
	// root(n)*root(n) check

	int p=sqrt(n);//3
	int x=i-(i%p);
	int y=j-(j%p);


	for(int a=x;a<x+p;a++){//6
	for(int b=y;b<y+p;b++){
	if(mat[a][b]==num){
		return false;
	}
}
}

	return true;
}
bool sudukosolver(int n,int i,int j,int mat[9][9]){
	// base case
	if(i==n){
		for(int l=0;l<n;l++){
			for(int m=0;m<n;m++){
				cout<<mat[l][m]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		
		return false;
	}

	// rec case
	if(j==n){
		return sudukosolver(n,i+1,0,mat);
	}
	if(mat[i][j]!=0){
		// filled
		return sudukosolver(n,i,j+1,mat);
	}
	else{
		// unfilled
		for(int num=1;num<=9;num++){
			if(kyamainumijpedsh(i,j,num,mat,n)){
			mat[i][j]=num;
			if(sudukosolver(n,i,j+1,mat)){
				return true;
			}
			mat[i][j]=0;

		}


		}

		return false;
		
	}
}
int main(){
	int mat[9][9] =
		{{0,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};

		sudukosolver(9,0,0,mat);
	



	return 0;
}