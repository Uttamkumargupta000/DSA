#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){

    //base case
    if(n==0 || n==1){
        return ;
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    //Recursive call
    bubbleSort(arr,n-1);
}

int main(){

    int arr[5]={2,5,1,6,9};

    bubbleSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}