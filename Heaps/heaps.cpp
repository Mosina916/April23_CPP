#include<iostream>
#include<vector>
using namespace std;
class minheap{
	vector<int>v;
	void heapify(int index){
		int minindex=index;
		int lci=2*index;
		int rci=lci+1;
		if(lci<v.size() and v[minindex]>v[lci]){
			minindex=lci;
		}
		if(rci<v.size() and v[minindex]>v[rci]){
			minindex=rci;
		}


		if(index!=minindex){
			swap(v[minindex],v[index]);
			heapify(minindex);
		}

	}

	public:
	minheap(){
		v.push_back(-1);
	}


	// push
	void push(int d){
		v.push_back(d);
		int child=v.size()-1;

		while(child!=1){
			int parent=child/2;
		if(v[parent]>v[child]){
			swap(v[parent],v[child]);
		}
		child=parent;

		}

		

	}
	

	// pop

	void pop(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);
	}


	// top
	int top(){
		return v[1];
	}


	// empty
	bool empty(){
		return v.size()==1;
	}


	// sizen v
	int size(){


		return v.size()-1;
	}
};


// heap sort

int main(){

	minheap h;
	h.push(1);
	h.push(2);
	h.push(3);
	h.push(17);
	h.push(19);
	h.push(36);
	h.push(7);
	h.push(25);
	h.push(100);

	h.push(0);

	while(!h.empty()){
		cout<<h.top()<<" ";
	h.pop();


	}

	cout<<endl;
	





	

	return 0;
}