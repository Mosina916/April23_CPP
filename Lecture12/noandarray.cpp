#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();
	char arr1[100];
	
	cin.getline(arr1,100);//Hello
	
	cout<<n<<endl;
	
	cout<<arr1<<endl;
	return 0;
}