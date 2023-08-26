#include<iostream>
#include<queue>
using namespace std;
class circularqueue{
	int *arr;
	int cs;
	int ts;
	int f;
	int r;
public:
	circularqueue(int s){
		arr=new int[s];
		cs=0;
		ts=s;
		r=-1;
		f=0;

	}


		void push(int d){
		if(cs<ts){
			r=(r+1)%ts;
			arr[r]=d;
			cs++;
		}
		else{
			cout<<"overflow"<<endl;
		}
		
		}

	void pop(){
		if(cs>0){
			f=(f+1)%ts;
		cs--;

		}
		else{
			cout<<"underflow"<<endl;
		}
		
	}

	int front(){
		return arr[f];
	}

	int size(){
		return cs;

	}
	bool empty(){
		return cs==0;
	}
};


int main(){
	circularqueue q(5);
	q.push(7);
	q.push(70);
	q.push(17);
	q.push(3);
	q.push(6);
	q.push(60);
	q.pop();
	q.pop();
	q.push(66);
	q.pop();
	q.pop();
	q.push(3);
	q.push(6);
	q.pop();






	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}


	




	return 0;

}