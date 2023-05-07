			 // 5                   5 
    //          5 4               4 5 
    //          5 4 3           3 4 5 
    //          5 4 3 2       2 3 4 5 
    //          5 4 3 2 1   1 2 3 4 5 
    //          5 4 3 2 1 0 1 2 3 4 5 
    //          5 4 3 2 1   1 2 3 4 5 
    //          5 4 3 2       2 3 4 5 
    //          5 4 3           3 4 5 
    //          5 4               4 5 
    //          5                   5 

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//5
	int r=1;
	while(r<=n){
		// part 1-->r1 to r5


	// stars
		int sno=n;

	int stc=1;
	while(stc<=r){
		// cout<<'*';
		cout<<sno<<' ';
		sno=sno-1;
		stc=stc+1;
	}

	// spaces
	int spc=1;
	while(spc<=(2*n)+1-(2*r)){
		cout<<' '<<' ';
		spc=spc+1;

	}

	// stars
	int sttno=n-r+1;
	int starc=1;
	while(starc<=r){
		// cout<<'*';
		cout<<sttno<<' ';
		sttno=sttno+1;
		starc=starc+1;
	}
	cout<<endl;
	r=r+1;



	}

	// r-->6part 2

	int staarc=1;
	int startnumber=n;//5

	while(staarc<=(2*n)+1){
		// cout<<'*';
		cout<<abs(startnumber)<<' ';//5 4 3 2 1 0 1 2 3 4 5
		startnumber=startnumber-1;//-5
		staarc=staarc+1;
	}
	cout<<endl;
	r=r+1;//7

	// part 3

	r=1;
	while(r<=n){
		// star
	int stcou=1;
	int stnoo=n;
	while(stcou<=n-r+1){
		// cout<<'*';
		cout<<stnoo<<' ';
		stnoo=stnoo-1;
		stcou=stcou+1;

	}


	// space
	int spppc=1;
	while(spppc<=(2*r)-1){
		cout<<' '<<' ';
		spppc=spppc+1;
	}


	// star
	int startno=r;
	int starrrc=1;
	while(starrrc<=n-r+1){
		// cout<<'*';
		cout<<startno<<' ';
		startno=startno+1;
		starrrc=starrrc+1;
	}
	
	cout<<endl;
	r=r+1;




	}

	
	



	



	return 0;
}