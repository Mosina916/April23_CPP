#include<iostream>
using namespace std;
class node{
public:
	string fname;
	int fprice;
	node*next;
	node(string f,int p){
		fname=f;
		fprice=p;
		next=NULL;

	}
};
class hashmap{
	node**arr;
	int cs;
	int ts;
public:
	hashmap(int size=7){
		arr=new node*[size];
		cs=0;
		ts=size;
		for (int i = 0; i <size; ++i)
		{
			arr[i]=NULL;
		}


	}
	int hashfunction(string s){//"abc"
		int mult=1;
		int ans=0;
		for(int i=0;i<s.length();i++){
			ans=(ans%ts+(s[i]%ts*mult%ts)%ts)%ts;
			// mult=(mult*29)%ts;

			mult=(mult%ts*29%ts)%ts;
		}

		return ans;

		
	}

	void rehashing(){
		node**oldarr=arr;
		int oldts=ts;
		arr=new node*[2*ts];
		ts=2*ts;
		cs=0;
		for (int i = 0; i <ts; ++i)
		{
			arr[i]=NULL;

		}
		// copy karna old to new array
		for(int i=0;i<oldts;i++){
			node*temp=oldarr[i];//300
		while(temp!=NULL){
			insert(temp->fname,temp->fprice);
			temp=temp->next;

		}

		}

		delete []oldarr;

		
		
	}


	void insert(string f,int p){
		int index=hashfunction(f);
		node*n=new node(f,p);
		// insert at front takes o(1)
		n->next=arr[index];
		arr[index]=n;
		cs++;
		if((cs*1.0/ts)>0.5){
			rehashing();
		}


	}


	void printhashmap(){
		for(int i=0;i<ts;i++){
			cout<<i<<" : ";
			node*temp=arr[i];
			while(temp!=NULL){
				cout<<"("<<temp->fname<<","<<temp->fprice<<"),";
				temp=temp->next;
			}
			cout<<endl;
		}

	}

	bool search(string f){
		int index=hashfunction(f);
		node*temp=arr[index];

		while(temp!=NULL){
			if(temp->fname==f){
			return true;

		}

		temp=temp->next;

		}
		return false;
		
	}


};
int main(){
	hashmap h;

	h.insert("abc",100);
	h.insert("pqr",120);
	h.insert("ayc",150);
	h.insert("yuc",190);
	h.printhashmap();
	if(h.search("pqrt")==true){
		cout<<"yes"<<endl;
	}
	else{
		cout<<"no"<<endl;

	}

	


	return 0; 
}