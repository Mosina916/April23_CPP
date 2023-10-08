#include<iostream>
using namespace std;
// int mincostpath(int cost[4][4],int di,int dj){
// 	// base case
// 	if(di==0 and dj==0){
// 		return cost[di][dj];
// 	}
// 	if(di<0 ||dj<0){
// 		return INT_MAX;
// 	}
// 	// rec case
// 	int op1=mincostpath(cost,di-1,dj);//16
// 	int op2=mincostpath(cost,di,dj-1);//13
// 	return min(op1,op2)+cost[di][dj];
// }
int mincostpathtd(int cost[4][4],int di,int dj,int arr[100][100]){
	// base case
	if(di==0 and dj==0){
		return arr[di][dj]=cost[di][dj];
	}
	if(di<0 ||dj<0){
		return INT_MAX;
	}
	if(arr[di][dj]!=-1){
		return arr[di][dj];
	}
	// rec case
	int op1=mincostpathtd(cost,di-1,dj,arr);//16
	int op2=mincostpathtd(cost,di,dj-1,arr);//13
	return arr[di][dj]=min(op1,op2)+cost[di][dj];
}

// bottom up
int bottomup(int i,int j,int cost[4][4]){
	int arr[100][100];

	for(int k=0;k<=i;k++){
	for(int l=0;l<=j;l++){
		if(k==0 and l==0){
		arr[k][l]=cost[k][l];
	}
	else if(k==0){
		arr[k][l]=arr[k][l-1]+cost[k][l];

	}
	else if(l==0){
		arr[k][l]=arr[k-1][l]+cost[k][l];

	}
	else{
		arr[k][l]=min(arr[k-1][l],arr[k][l-1])+cost[k][l];
	}

	}
}
for(int k=0;k<=i;k++){
		for(int l=0;l<=j;l++){
			cout<<arr[k][l]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

return arr[i][j];
	



}

int main(){
	int cost[4][4]={
		{2,3,9,3},
		{1,1,6,4},
		{3,2,4,1},
		{6,3,1,2}

	};

	int i,j;

	cin>>i>>j;

	cout<<bottomup(i,j,cost)<<endl;
	// cout<<mincostpath(cost,i,j)<<endl;

	// int arr[100][100];
	// // memset(arr,-1,sizeof(arr));
	// for (int i = 0; i <100; ++i)
	// {
	// 	for(int j=0;j<100;j++){
	// 		arr[i][j]=-1;
	// 	}
	// }

	// cout<<mincostpathtd(cost,i,j,arr)<<endl;

	// for(int k=0;k<=i;k++){
	// 	for(int l=0;l<=j;l++){
	// 		cout<<arr[k][l]<<" ";
	// 	}
	// 	cout<<endl;
	// }




	
	return 0;
}