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
   int r=1;
  for(;r<=(tr+1)/2;r=r+1){
     // int spc=1;
    // while(spc<=(tr+1)/2-r){
      // cout<<'\t';
      // spc=spc+1;
    // }

    for(int spc=1;spc<=(tr+1)/2-r; spc=spc+1){
      cout<<'\t';

    }
    // stars
    int stc=1;
    while(stc<=(2*r)-1){
      cout<<'*'<<'\t';
      stc=stc+1;
    }
    cout<<endl;

  }

  // int r=1;
  // while(r<=(tr+1)/2){
    // spaces 
    // int spc=1;
    // while(spc<=(tr+1)/2-r){
    //   cout<<'\t';
    //   spc=spc+1;
    // }
    // // stars
    // int stc=1;
    // while(stc<=(2*r)-1){
    //   cout<<'*'<<'\t';
    //   stc=stc+1;
    // }
    // cout<<endl;
    // r=r+1;

  // }

  
  // lower half
  while(r<=tr){


  // 1 row ka kaam
  // spaces
  int spacc=1;
  while(spacc<=r-1-(tr)/2){
    cout<<'\t';
    spacc=spacc+1;
  }

  // stars
  int starc=1;
  while(starc<=2*tr+1-(2*r)){
    cout<<'*'<<'\t';
    starc=starc+1;

  }

  cout<<endl;
  r=r+1;


  }







  return 0;
}