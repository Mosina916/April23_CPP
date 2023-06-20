#include <iostream>
using namespace std;
void matrixprintwave(int arr[4][4],int r,int c){
	for(int colno=0;colno<=c-1;colno++){
		if(colno%2==0){
		// col is even downward
		for(int rowno=0;rowno<=r-1;rowno++){
			cout<<arr[rowno][colno]<<" ";
		}
	}
	else{
		// upward 
		for(int rowno=r-1;rowno>=0;rowno--){
			cout<<arr[rowno][colno]<<" ";
		}
	}

	}
	
}
int main(){
	
	int arr[4][4]={
		{2,5,6,9},
		{3,6,7,10},
		{5,13,17,20},
		{7,14,21,31}
	};

	matrixprintwave(arr,4,4);



	return 0;
}