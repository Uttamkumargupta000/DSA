#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int s, int e){

    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool BinarySearch(int arr[], int s, int e, int key){
    cout<<endl;
    printArray(arr,s,e);
    if(s>e){
        return 0;
    }

    int mid= s+(e-s)/2;
    cout<<"value of arr mid is "<<arr[mid]<<endl;
    if(arr[mid]==key)
        return 1;
    
    if(arr[mid]<key){
        return BinarySearch(arr,mid+1,e,key);
    }
    else{
        return BinarySearch(arr,s,mid-1,key);
    }
}

int main(){
    
    int arr[6]={2,4,6,10,14,18};
    int size=6;
    int key=6;

    cout<<"present or not "<< BinarySearch(arr,0,size-1, key)<<endl;
    // if(ans){
    //     cout<<"Key is present " <<endl;
    // }
    // else{
    //     cout<<"Key is not present "<<endl;
    // }
    return 0;
}