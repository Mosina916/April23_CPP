#include<iostream> 
#include<cmath>
using namespace std;
int nstaricase(int n,int k){//5
	// base c
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	int ans=0;
	for(int i=1;i<=k;i++){
		ans=ans+nstaricase(n-i,k);
	}
 	return ans;
}
int nstaricasetd(int n,int k,int *arr){//5
	// base c
	if(n==0){
		return arr[n]=1;
	}
	if(n<0){
		return 0;
	}
	if(arr[n]!=-1){
		return arr[n];
	}
	// rec case
	int ans=0;
	for(int i=1;i<=k;i++){
		ans=ans+nstaricasetd(n-i,k,arr);
	}
 	return arr[n]=ans;
}

// int bottomup(int n,int k){
// 	int *arr=new int[n+1];
// 	arr[0]=1;

// 	for(int a=1;a<=n;a++){
// 		int ans=0;
// 	for(int b=1;b<=k;b++){
// 		if(b<=a){
// 			ans=ans+arr[a-b];

// 		}
// 	}
// 	arr[a]=ans;

// 	}

// 	for(int i=0;i<=n;i++){
// 		cout<<arr[i]<<" ";
// 	}

// 	cout<<endl;

// 	return arr[n];

// }

int bottomupoptimised(int n,int k){
	int *arr=new int[n+1];
	arr[0]=1;

	for(int a=1;a<=n;a++){
		int ans=0;
	for(int b=1;b<=k;b++){
		if(b<=a){
			ans=ans+arr[a-b];

		}
	}
	arr[a]=ans;

	}

	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	return arr[n];

}

int main(){
	int n,k;
	cin>>n>>k;

	cout<<bottomupoptimised(n,k)<<endl;
	// cout<<nstaricase(n,k)<<endl;
	// int *arr=new int[n+1];
	// for (int i = 0; i <=n; ++i)
	// {
	// 	arr[i]=-1;
	// }
	// cout<<nstaricasetd(n,k,arr)<<endl;
	// for (int i = 0; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	

	return 0;
}