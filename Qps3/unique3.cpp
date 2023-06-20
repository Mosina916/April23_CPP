#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int no;
	int arr[32]={0};
	int m=INT_MIN;
	for(int times=1;times<=n;times++){
		int i=0;
		cin>>no;
		m=max(m,no);
		while(no>0){
			if((no&1)==1){
				arr[i]++;

			}
			i++;
			no=no>>1;
		}
	}

	for (int k = 0; k <=31;k++)
	{
		arr[k]=arr[k]%3;
	}

	int coun=0;
	while(m>0){
		m=m>>1;
		coun++;
	}

	int sum=0;
	for(int l=coun-1;l>=0;l--){
		sum=sum+arr[l]*pow(2,l);
	}

	cout<<sum<<endl;



	return 0;

}
