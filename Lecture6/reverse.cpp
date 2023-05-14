#include<iostream>
using namespace std;
int main(){
  int no;
  cin>>no;//623

  int op=0;

  while(no>0){
     int rem=no%10;//3
  op=op*10+rem;//3
  no=no/10;


  }

  cout<<op<<endl;

 



  // while(no>0){
  //    cout<<no%10;
  // no=no/10;


  // }
 



 
  return 0;
}