#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<string>
using namespace std;

class node{
public:
	char ch;
	bool isterminal;
	unordered_map<char,node*> h;
	node(char c){
		ch=c;
		isterminal=false;
	}

};

class trie{
	node*root;
public:
	trie(){
		root=new node('\0');
	}

	// insert
	void insert(string s){
		node*temp=root;

		// s-->"hello"
		for(int i=0;s[i]!='\0';i++){
			char x=s[i];//l
		if(temp->h.count(x)){
			temp=temp->h[x];

		}
		else{
			temp->h[x]=new node(x);
			temp=temp->h[x];
		}

		}
		temp->isterminal=true;
	}


	// search

bool search(string s){
	node*temp=root;
	for(int i=0;s[i]!='\0';i++){
		char x=s[i];
		if(temp->h.count(x)){
			temp=temp->h[x];
		}
		else{
			return false;
		}
	}
	return temp->isterminal;

}
};


int main(){
	trie t;
	t.insert("help");
	t.insert("hello");
	t.insert("cat");
	t.insert("rat");
	t.insert("code");
	t.insert("coding");
	if(t.search("hello")==true){
		cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;

	}

	
	
	
	return 0;
}