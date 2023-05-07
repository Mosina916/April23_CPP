#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;//7

	// part 1
	int stc=1;
	while(stc<=tr){
		cout<<'*'<<'\t';
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
		cout<<'*'<<'\t';
		starc=starc+1;
	}

	// spaces
	int spc=1;
	while(spc<=2*r-1){
		cout<<" "<<'\t';
		spc=spc+1;

	}
	// stars
	int starrc=1;
	while(starrc<=(tr+1)/2-r){
		cout<<'*'<<'\t';
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
		cout<<'*'<<'\t';
		sttt=sttt+1;
	}


	// \spaces
	int spacecou=1;
	while(spacecou<=(tr-2)-2*r){
		cout<<' '<<'\t';
		spacecou=spacecou+1;
	}


	// stars
	int starcount=1;
	while(starcount<=r+1){
		cout<<'*'<<'\t';
		starcount=starcount+1;

	}
	cout<<endl;
	r=r+1;



	}


	// part 4
	int starcountt=1;
	while(starcountt<=tr){
		cout<<'*'<<'\t';
		starcountt=starcountt+1;
	}

	cout<<endl;

	





	


	

	return 0;
}