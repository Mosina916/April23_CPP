#include<iostream>
using namespace std;
int main(){
  // break and continue statemets are always used inside loop 

  int i=1;
  while(i<=10){
    if(i==5){
      i=i+1;
      continue;
    }

    if(i==7){
      i=i+1;
      continue;
    }
    cout<<i<<" ";
    i=i+1;
  }

 


  return 0;
}