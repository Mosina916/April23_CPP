#include <iostream>
using namespace std;
int main(){
	
	// char arr[3][4]={
	// 	{'A','R','S','D'},
	// 	{'Y','R','K','D'},
	// 	{'O','Q','C','S'}
	// };

	// char arr[3][5]={
	// char arr[][5]={
	// 	{'A','R','S','D','\0'},
	// 	{'Y','R','K','D','\0'},
	// 	{'O','Q','C','S','\0'}
	// };
	char arr[][5]={
		"ARSD",
		"YRKD",
		"OQCS"
	};
	cout<<&arr[0][0]<<endl;
	cout<<&arr[1][0]<<endl;
	cout<<&arr[2][0]<<endl;

	// cout<<arr[0]<<endl;
	// cout<<arr[1]<<endl;
	// cout<<arr[2]<<endl;

	






	return 0;
}