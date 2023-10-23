#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

#define pb push_back 
template<typename T>
class graph{
	// unordered_map<string,list<string> > h;
	unordered_map<T,list<T> > h;

public:
	void addedge(T u,T v,bool bidirec=true){
		h[u].pb(v);
		if(bidirec){
			h[v].pb(u);
		}

	}
	void printgraph(){

		for(auto x:h){
			cout<<x.first<<"--> ";
			for(auto p:x.second){
				cout<<p<<",";
			}
			cout<<endl;

		}
		
		
	}

	void dfs(T src,unordered_map<T,bool> &visited){
		// cout<<src<<" ";//0
		visited[src]=true;
		for(auto x:h[src]){
			if(!visited[x]){
				dfs(x,visited);
			}
		}
	}
	int totalcomponentsingraph(T src){
		unordered_map<int,bool> visited;
		int comp=1;
		dfs(0,visited);
		for(auto p:h){
			if(!visited[p.first]){
				comp++;//3
				dfs(p.first,visited);
			}
		}

		return comp;
	}

};


int main(){
	graph<int> g;
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(4,3);
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(2,3);

	g.addedge(111,110);
	g.addedge(111,120);
	g.addedge(110,120);

	g.addedge(40,41);
	g.addedge(40,42);
	g.addedge(40,43);
	g.printgraph();


	cout<<g.totalcomponentsingraph(0)<<endl;
	
	
	return 0;
}