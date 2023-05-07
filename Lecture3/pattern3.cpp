//     *****
//    *   *
//   *   *
//  *   *
// *****

  //     *
  //   * * *
  // * * * * *
  //   * * *
  //     *
#include<iostream>
using namespace std;
int main(){
   int tr;
   cin>>tr;//5

  // part 1
   int r=1;
   // spaces
   int spc=1;
   while(spc<=tr-1){
      cout<<' ';
      spc=spc+1;
   }

   // stars
   int stc=1;
   while(stc<=tr){
      cout<<'*';
      stc=stc+1;
   }

   cout<<endl;
   r=r+1;//2
   while(r<=tr-1){
      // 2nd part

// space print
   int spacc=1;
   while(spacc<=tr-r){
      cout<<' ';
      spacc=spacc+1;
   }

   cout<<'*';
   // spaces
   int spacco=1;
   while(spacco<=tr-2){
      cout<<' ';
      spacco=spacco+1;
   }

   cout<<'*';
   cout<<endl;
   r=r+1;//5

   }

   // r-->5
   // part 3
   int starcount=1;
   while(starcount<=tr){
      cout<<'*';
      starcount=starcount+1;
   }

   cout<<endl;



   






  


  return 0;
}