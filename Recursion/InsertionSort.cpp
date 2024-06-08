#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int i, int n){

    //base case
    if(i==n){
        return ;
    }
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }

    insertionSort(arr,i+1,n);
}
int main(){

    int arr[7]={3,8,1,4,5,-2,1};
    
    //function calling
    insertionSort(arr,0,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}