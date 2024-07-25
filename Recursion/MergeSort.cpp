#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e){

    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first = new int[len1];
    int *second =new int[len2];

    //copy value 
    int mainArrayIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }

    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }

    //merge 2 sorted array
    int Index1=0;
    int Index2=0;
    mainArrayIndex=s;

    while(Index1 < len1 && Index2 < len2){
        if(first[Index1] < second[Index2]){
            arr[mainArrayIndex++] = first[Index1++];
        }
        else{
            arr[mainArrayIndex++] = second[Index2++];
        }
    }

    while(Index1 < len1){
        arr[mainArrayIndex++] = first[Index1++];
    }

    while(Index2 < len2){
        arr[mainArrayIndex++] = second[Index2++];
    }

    delete []first;
    delete []second;
    
}
void mergeSort(int arr[], int s, int e){
    
    //base case
    if(s>=e){
        return ;
    }

    int mid= s+(e-s)/2;

    //left part sorted
    mergeSort(arr,s,mid);

    //right part sorted
    mergeSort(arr,mid+1,e);

    //merge both part
    merge(arr,s,e);
}

int main(){
    
    int arr[15]={3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n=15;

    // int arr[5]={3,7,0,1,5};
    // int n=5;

    // int arr[6]={5,8,-2,5,4,0};
    // int n=6;

    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

