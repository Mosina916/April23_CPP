#include<iostream>
using namespace std;
void mergetwosortedarrays(int arr[],int s,int e){
    // s=0 e=n-1
    int temp[10000];
    int k=s;
    int i=s;
    int mid=(s+e)/2;
    int j=mid+1;

    while(i<=mid and j<=e){
        if(arr[i]<arr[j]){
        temp[k++]=arr[i++];
        // i++;
        // k++;

    }
    else{
        temp[k++]=arr[j++];
    }

    }
    while(j<=e){
        temp[k++]=arr[j++];
    }


    while(i<=mid){
        temp[k++]=arr[i++];
    }

    // copt temp arr
    for(int i=s;i<=e;i++){
        arr[i]=temp[i];
    }

    // for(int i=0;i<n1+n2;i++){
    //     cout<<temp[i]<<" ";
    // }
    // cout<<endl;
    

}
void mergesort(int arr[],int s,int e){//3 1 4 5 2
    // base case
    if(s==e){
        return;
    }

    // rec case
    int mid=(s+e)/2;
    mergesort(arr,s,mid);//1 3 4
    mergesort(arr,mid+1,e);//2 5
    mergetwosortedarrays(arr,s,e);
}

int main(){
   int arr[]={3,1,4,5,2};//1 2 3 4 5
   int n=sizeof(arr)/sizeof(int);

   mergesort(arr,0,n-1);

   for (int i = 0; i <n; ++i)
   {
       cout<<arr[i]<<" ";
   }

   cout<<endl;




    return 0;
}