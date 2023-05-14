#include<iostream>
using namespace std;
int main(){
	int tn;
	cin>>tn;//7
	// 5 3 7 3 5 4 7
	int ans=0;
	int no;
	// loop
	int i=1;
	while(i<=tn){
			cin>>no;//3
		ans=ans^no;//0^5-->5^3-->6^7^3
		i=i+1;

	}

	cout<<ans<<endl;


	

	return 0;
}