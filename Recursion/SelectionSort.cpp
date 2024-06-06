#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j){

    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void selectionSort(int arr[], int i, int n){
    
    //base case
    if(n==0 || n==1){
        return ;
    }

    // find the minimum element in the unsorted subarray `[i…n-1]`
    // and swap it with `arr[i]`
    int min=i;
    
    for(int j=i+1;j<n;j++){
         // if `arr[j]` is less, then it is the new minimum
        if(arr[j]<arr[min]){
            min=j; //update the minimum index
        }
    }
    // swap the minimum element in subarray `arr[i…n-1]` with `arr[i]`
    swap(arr,min,i);

    //Recursive call
    if(i+1<n){ 
        selectionSort(arr,i+1,n);
    }
}
int main(){

    int arr[7]={3,5,8,4,1,9,-2};

    //calling function
    selectionSort(arr,0,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}