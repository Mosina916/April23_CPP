#include<iostream>
using namespace std;
int c=0;
void perm(char inp[],int i){
	// base case
	if(inp[i]=='\0'){
		c++;
		cout<<inp<<endl;
		return;
	}



	// rec case
	for(int j=i;inp[j]!='\0';j++){
		swap(inp[i],inp[j]);
		perm(inp,i+1);
		swap(inp[i],inp[j]);//backtracking

	}
}
int main(){//start	
	char inpu[1000];
	cin>>inpu;
	perm(inpu,0);

	cout<<c<<endl;




	return 0;//end
}