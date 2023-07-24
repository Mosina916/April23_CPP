#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > f(int n){
	vector<int> v;
	vector<vector<int> > ans;

	// write your sol here
	ans.push_back(v);


	return ans;



}
int main(){
	vector<int> v;
	v.push_back(5);
	v.push_back(3);
	v.push_back(7);
	v.push_back(2);
	v.push_back(9);

	// for (int i = 0; i <v.size(); ++i)
	// {
	// 	cout<<v[i]<<' ';
	// }

	sort(v.begin(),v.end());

	// auto x=&a;

	for(auto x=v.begin();x!=v.end();x++){
			cout<<*x<<" ";

	}
	cout<<endl;

	// cout<<v.front()<<endl;
	// cout<<v.at(2)<<endl;
	 v.insert(v.begin(), 5);
	 v.insert(v.begin()+3, 15);




	for (int i = 0; i <v.size(); ++i)
	{
		cout<<v[i]<<' ';
	}

	cout<<endl;
	// cout<<v.size()<<endl;//5
	// cout<<v.capacity()<<endl;//8


	// v.pop_back();

	// cout<<endl;
	// cout<<v.size()<<endl;//5
	// cout<<v.capacity()<<endl;//8


	cout<<endl;

	return 0;
}