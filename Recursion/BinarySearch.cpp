#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(int arr[], int s, int e, int key){
    if(s>e){
        return 0;
    }

    int mid= s+(e-s)/2;

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

    bool ans= BinarySearch(arr,0,size-1, key);
    if(ans){
        cout<<"Key is present " <<endl;
    }
    else{
        cout<<"Key is not present "<<endl;
    }
    return 0;
}