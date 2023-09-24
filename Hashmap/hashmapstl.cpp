#include<iostream>
#include<unordered_map>
// #include<map>
using namespace std;

#define mp make_pair
#define um unordered_map


int main(){
	// hashmap-->ordered unordered
	// unordered_map<key,value> name;
	um<string,int> h;

	// map<string,int> h;//key k acc sorted
	h["mango"]=100;
	h["apple"]=120;
	h["banana"]=70;
	h["papaya"]=56;
	h["papaya"]=96;
	// h.insert(mp("hel",mp("he",100)));

	if(h.find("banan")!=h.end()){
		cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;
	}

	// for(auto p:h){
	// 	cout<<p.first<<" --> "<<p.second<<endl;
	// }


	// unordered_map<int,pair<int,string> > h;



	

	


	return 0; 
}