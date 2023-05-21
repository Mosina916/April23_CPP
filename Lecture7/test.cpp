#include<iostream>
using namespace std;
int main() {
	int tr;
	cin>>tr;
	while(tr--)
	{
		long long int m,n;
		cin>>m>>n;
		//i ko odd liya hai and j ko even liya hai
		int i=1,j=i+1;
		while(i<=m && j<=n)
		{
            i=i+2;
			j=j+2;
			
		}
		if(j>n)
		{
        cout<<"Aayush"<<endl;
		}
		else if(i>m)
		{
		cout<<"Harshit"<<endl;
	    }
	}
	return 0;
}