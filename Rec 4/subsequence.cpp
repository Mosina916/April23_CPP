#include<iostream>
#include<cmath>
using namespace std;
void subsequence(char inp[1000],char out[1000],int i,int j){
    // base case
    if(inp[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }


    // rec case
    // without a
    subsequence(inp,out,i+1,j);
    // with a
    out[j]=inp[i];
    subsequence(inp,out,i+1,j+1);
}
int main(){
    char inp[1000];
    char out[1000];
    cin.getline(inp,1000);
    subsequence(inp,out,0,0);

    return 0;
}