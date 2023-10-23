#include<iostream>
#include<list>
using namespace std;
#define pb push_back 
class graph{
	list<int>*arr;
	int N;
public:

	graph(int n){
		N=n;
		arr=new list<int>[n];

	}

	void addedge(int u,int v,bool bidirec=true){
		arr[u].pb(v);
		if(bidirec){
			arr[v].pb(u);
		}

	}
	void printgraph(){
		for(int i=0;i<N;i++){
			cout<<i<<"--> ";
		for(auto x:arr[i]){
			cout<<x<<" ";

		}
		cout<<endl;

		}
		
	}



};

int main(){
	graph g(5);
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(4,3);
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(2,3);

	g.printgraph();
	



	return 0;
}