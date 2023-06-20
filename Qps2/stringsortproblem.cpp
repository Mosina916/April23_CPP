#include<iostream>
#include<string>
using namespace std;
// apple bat  bat apple
bool comp(string a,string b){ //a-->batman b-->bat
	int al=a.length();//6
	int bl=b.length();//3
	if(bl<al and a.substr(0,bl)==b){
		return a>b;

	}

	return a<b;
}
int main(){
	string arr[10000];
	int n;
	cin>>n;
	cin.ignore();
	for (int i = 0; i <n; ++i)
	{
		// cin>>arr[i];
		getline(cin,arr[i]);
	}

	sort(arr,arr+n,comp);
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<endl;
	}
	
	return 0;

}
