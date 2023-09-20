#include<iostream>
#include<queue>
using namespace std;
void printheap(priority_queue<int,vector<int>,greater<int> > h){
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();
	}
}
int main(){
	priority_queue<int,vector<int>,greater<int> > h;
	int k;
	cin>>k;//4
	int co=1;

	while(1){
		int d;
		cin>>d;//4 9 3 6 8 2 -1
		if(d==-1){
			// heap print
			printheap(h);
		}
		else{
			if(co<=k){
				h.push(d);
				co++;
			}
			else if(h.top()<=d){
				h.pop();
				h.push(d);

			}


		}
	}





	return 0;
}