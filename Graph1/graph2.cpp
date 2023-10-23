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

	// void addedge(string u,string v,bool bidirec=false){
	// void addedge(T u,T v,bool bidirec=true){
	void addedge(T u,T v,bool bidirec=false){
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

	// void bfs(T src){
	// 	queue<T> q;
	// 	q.push(src);
	// 	unordered_map<T,bool> visited;
	// 	visited[src]=true;
	// 	while(!q.empty()){
	// 		T p=q.front();//0
	// 	q.pop();
	// 	cout<<p<<" ";//0 1
	// 	for(auto x:h[p]){
	// 		if(!visited[x]){
	// 			q.push(x);
	// 			visited[x]=true;
	// 		}
	// 	}

	// 	}

	// 	cout<<endl;

	// }

	// void distanceofeverynodefromsrcnode(T src){
	// 	queue<T> q;
	// 	q.push(src);
	// 	unordered_map<T,bool> visited;
	// 	unordered_map<T,int> distance;
	// 	distance[src]=0;
	// 	visited[src]=true;
	// 	while(!q.empty()){
	// 		T p=q.front();//0
	// 	q.pop();
		
	// 	for(auto x:h[p]){
	// 		if(!visited[x]){
	// 			q.push(x);
	// 			visited[x]=true;
	// 			distance[x]=distance[p]+1;
	// 		}
	// 	}

	// 	}

	// 	for(auto x:distance){
	// 		cout<<"distance from "<<src<<" to "<<x.first<<" is "<<x.second<<endl;
	// 	}

		

	// }

	int singlesourceshortestpath(T src,T dest){
		queue<T> q;
		q.push(src);
		unordered_map<T,bool> visited;
		unordered_map<T,int> distance;
		unordered_map<T,T> parent;
		parent[src]=src;
		distance[src]=0;
		visited[src]=true;
		while(!q.empty()){
			T p=q.front();//0
		q.pop();
		
		for(auto x:h[p]){
			if(!visited[x]){
				q.push(x);
				visited[x]=true;
				distance[x]=distance[p]+1;
				parent[x]=p;
			}
		}

		}
		// return distance[dest];

		// path print

		T temp=dest;
		while(temp!=src){
			cout<<temp<<"<--";//2<--1<--
		temp=parent[temp];

		}

		cout<<temp<<endl;

		return distance[dest];
		

		
	}



};

int main(){
	graph<int> g;
	// g.addedge("trumph","modi",true);
	// g.addedge("putin", "trumph");
	// g.addedge("putin", "modi");
	// g.addedge("putin", "pope");
	// g.addedge("putin", "trumph");
	// g.addedge("prabhu", "modi");
	// g.addedge("modi", "yogi",true);
	// g.addedge("yogi", "prabhu");
	// g.addedge("pope", "");

	// g.addedge(0,1);
	// g.addedge(0,4);
	// g.addedge(1,4);
	// g.addedge(4,3);
	// g.addedge(1,3);
	// g.addedge(1,2);
	// g.addedge(2,3);
	// g.distanceofeverynodefromsrcnode(0);

	// cout<<g.singlesourceshortestpath(2,4)<<endl;


	// g.printgraph();
	



	return 0;
}