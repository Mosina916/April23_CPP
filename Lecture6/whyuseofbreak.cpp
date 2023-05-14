#include<iostream>
using namespace std;
int main(){
   int no;
   cin>>no;//6
   int i=2;

   while(i<=no-1){
    if(no%i==0){
      cout<<"not prime"<<endl;
      // break;
      return 0;

   }
   i=i+1;//7

   }
   
   if(i==no){
    cout<<"no is prime"<<endl;
   }


   cout<<"hello"<<endl;
   cout<<"hii"<<endl;

   




 


  return 0;
}