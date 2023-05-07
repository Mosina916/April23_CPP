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
  while(r<=(tr+1)/2){
    // spaces 
    int spc=1;
    while(spc<=(tr+1)/2-r){
      cout<<"    ";
      spc=spc+1;
    }
    // stars
    int stc=1;
    while(stc<=(2*r)-1){
      cout<<'*'<<"    ";
      stc=stc+1;
    }
    cout<<endl;
    r=r+1;

  }

  
  // lower half
  while(r<=tr){


  // 1 row ka kaam
  // spaces
  int spacc=1;
  while(spacc<=r-1-(tr)/2){
    cout<<"    ";
    spacc=spacc+1;
  }

  // stars
  int starc=1;
  while(starc<=2*tr+1-(2*r)){
    cout<<'*'<<"    ";
    starc=starc+1;

  }

  cout<<endl;
  r=r+1;


  }







  return 0;
}