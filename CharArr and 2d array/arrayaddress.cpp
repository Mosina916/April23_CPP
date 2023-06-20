#include <iostream>
using namespace std;
int main(){
	
	int arr[3][4]={
		{3,5,2,6},
		{7,5,1,7},
		{17,9,2,1}
	};

	cout<<arr<<endl;
	cout<<&arr[0][0]<<endl;
	cout<<arr[0]<<endl;
// 	3
// 0x7ff7ba53d980
// 7
// 0x7ff7ba53d990
// 17
// 0x7ff7ba53d9a0







	cout<<arr[0][0]<<endl;
	cout<<&arr[0][0]<<endl;

	cout<<arr[1][0]<<endl;
	cout<<&arr[1][0]<<endl;

	cout<<arr[2][0]<<endl;
	cout<<&arr[2][0]<<endl;
	
	
	






	return 0;
}