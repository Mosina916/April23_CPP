#include<iostream>
using namespace std;
int mincostpath(int cost[4][4],int di,int dj){
	// base case
	if(di==0 and dj==0){
		return cost[di][dj];
	}
	if(di<0 ||dj<0){
		return INT_MAX;
	}
	// rec case
	int op1=mincostpath(cost,di-1,dj);//16
	int op2=mincostpath(cost,di,dj-1);//13
	return min(op1,op2)+cost[di][dj];
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
	cout<<mincostpath(cost,i,j)<<endl;


	
	return 0;
}