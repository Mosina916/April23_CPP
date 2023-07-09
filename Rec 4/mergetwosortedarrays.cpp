#include<iostream>
using namespace std;
void mergetwosortedarrays(int arr1[],int n1,int arr2[],int n2){
    int temp[10000];
    int k=0;
    int i=0;
    int j=0;

    while(i<n1 and j<n2){
        if(arr1[i]<arr2[j]){
        temp[k++]=arr1[i++];
        // i++;
        // k++;

    }
    else{
        temp[k++]=arr2[j++];
    }

    }
    while(j<n2){
        temp[k++]=arr2[j++];
    }


    while(i<n1){
        temp[k++]=arr1[i++];
    }

    for(int i=0;i<n1+n2;i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    

}

int main(){
    int arr1[]={3,5,7,9,13};
    int arr2[]={2,4,6,8,90,100,400};
    int n1=sizeof(arr1)/sizeof(int);//5
     int n2=sizeof(arr2)/sizeof(int);//4
     mergetwosortedarrays(arr1,n1,arr2,n2);
    // 2 3 4 5 6 7 8 9 13 90,100,400



    return 0;
}