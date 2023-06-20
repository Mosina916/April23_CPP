#include<iostream>
using namespace std;
int fact(int n){
	int ans=1;
	for (int i = 1; i <=n; ++i)
	{
		ans=ans*i;
	}
	return ans;
}

int main(){
	int tr;
	cin>>tr;
	int rowno=1;
	while(rowno<=tr){
		// spaces
		cout<<" ";
		int spc=1;
		while(spc<=tr-rowno){
			cout<<"  ";
			spc++;
		}

		// stars
		int stc=1;
		while(stc<=rowno){
			if(stc==1){
				cout<<1<<"   ";

			}
			else if(stc==rowno){
				cout<<1;

			}
			else{
				int num=fact(rowno-1)/(fact(stc-1)*fact(rowno-stc));
				cout<<num<<"   ";

			}
			
			stc++;
		}
		rowno++;
		cout<<endl;


	}

	

	return 0;
}