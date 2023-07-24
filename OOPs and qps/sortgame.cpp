#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool mycomperator(pair<string,int> p1,pair<string,int> p2){
	if(p1.second==p2.second and p1.first<p2.first){
		return true;
	}
	else{
		return p1.second>p2.second;
	}
}
int main(){
	int maxsal;
	cin>>maxsal;//79
	int n;
	cin>>n;//4

	string name;
	int sal;
	vector<pair<string,int > > v;
	

	for(int i=0;i<n;i++){
		cin>>name>>sal;//Eve 78 Bob 99
	if(sal>=maxsal){
		v.push_back(make_pair(name,sal));


	}

	}

	sort(v.begin(),v.end(),mycomperator);

	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<' '<<v[i].second<<endl;
	}

	






	return 0;
}