 
#include<iostream>
using namespace std;
int d=56;//global variables/g

int main(){
  // local variables
  int a=60;
  int b=90;
  int d=98;
  // cout<<d<<endl;
   cout<<::d<<endl;
  // scope resolution operator ::

  // i still want to print global d  even if i am having d in my scope
  if(a<50){
    int c=940;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    // cout<<d<<endl;
  }
  else{
    int c=90;
    a=a+40;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
     cout<<::d<<endl;
  }

  //   cout<<a<<endl;
  //   cout<<b<<endl;
  //   // cout<<c<<endl;




  return 0;
}