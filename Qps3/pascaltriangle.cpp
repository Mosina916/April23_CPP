#include<iostream>
using namespace std;

int main(){
	int tr;
	cin>>tr;
	int rowno=1;
	while(rowno<=tr){
		// spaces
		int spc=1;
		while(spc<=tr-rowno+1){
			cout<<" ";
			spc++;
		}

		// stars
		int stc=1;
		while(stc<=rowno){
			cout<<"* ";
			stc++;
		}
		rowno++;
		cout<<endl;


	}

	

	return 0;
}