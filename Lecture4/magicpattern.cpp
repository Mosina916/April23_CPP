#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;//5

	tr=(2*tr-1);



	// part 1
	int stc=1;
	while(stc<=tr){
		cout<<'*';
		stc=stc+1;
	}

	cout<<endl;


	// part 2
	int r=1;
	while(r<=(tr-1)/2){
		// for any row
	// stars
	int starc=1;
	while(starc<=(tr+1)/2-r){
		cout<<'*';
		starc=starc+1;
	}

	// spaces
	int spc=1;
	while(spc<=2*r-1){
		cout<<" ";
		spc=spc+1;

	}
	// stars
	int starrc=1;
	while(starrc<=(tr+1)/2-r){
		cout<<'*';
		starrc=starrc+1;
	}

	cout<<endl;
	r=r+1;


	}

	// part 3
	r=1;
	while(r<=(tr-1)/2-1){

		// for any row

	// stars
	int sttt=1;
	while(sttt<=r+1){
		cout<<'*';
		sttt=sttt+1;
	}


	// \spaces
	int spacecou=1;
	while(spacecou<=(tr-2)-2*r){
		cout<<' ';
		spacecou=spacecou+1;
	}


	// stars
	int starcount=1;
	while(starcount<=r+1){
		cout<<'*';
		starcount=starcount+1;

	}
	cout<<endl;
	r=r+1;



	}


	// part 4
	int starcountt=1;
	while(starcountt<=tr){
		cout<<'*';
		starcountt=starcountt+1;
	}

	cout<<endl;

	





	


	

	return 0;
}