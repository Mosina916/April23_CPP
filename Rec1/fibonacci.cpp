 #include<iostream>
using namespace std;
// 0 base index
// int fibo(int pos){//0
// 	// base case
// 	if(pos==0||pos==1){
// 		return pos;
// 	}
// 	// rec case
// 	return fibo(pos-1)+fibo(pos-2);//without storing
// 	// int x=fibo(pos-1);//with store
// 	// int y=fibo(pos-2);
// 	// return x+y;
// }
// 1 base index
int fibo(int pos){//0
	// base case
	if(pos==1||pos==2){
		return pos-1;
	}
	// rec case
	return fibo(pos-1)+fibo(pos-2);//without storing
	// int x=fibo(pos-1);//with store
	// int y=fibo(pos-2);
	// return x+y;
}
int main(){
	int pos;
	cin>>pos;//4
	cout<<"fibo at pos is : "<<fibo(pos)<<endl;


	return 0;
}