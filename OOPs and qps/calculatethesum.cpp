#include<iostream>
using namespace std;
#define mod 1000000007
int main(){
	int n;
	cin>>n;
	int arr[1000000];
	int b[1000000];
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
		b[i]=arr[i];

	}

	int q;
	cin>>q;//2
	while(q--){
		int x;
	cin>>x;//0


	if(x==0){
		for(int i=0;i<n;i++){
			b[i]=2*b[i];
		}
	}
	else{
		for(int i=0;i<n;i++){
			int index=(n-x+i)%n;
		b[i]=arr[i]+arr[index];

		}

		
		

	}
	for(int i=0;i<n;i++){
			arr[i]=b[i];
		}


	}

	int sum=0;


	for (int i = 0; i <n; ++i)
	{
		sum=((sum%mod)+arr[i]%mod)%mod;
	}

	cout<<sum<<endl;




	



	

	return 0;
}