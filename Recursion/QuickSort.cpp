#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){
    //taking pivot element
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //putiing at its right place 
    int pivotIndex=s+count;
    int temp=arr[pivotIndex];
    arr[pivotIndex]=arr[s];
    arr[s]=temp;

    //fisitng the correct position
    int i=s, j=e;
    while(i < pivotIndex && j>pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i < pivotIndex && j>pivotIndex){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    //base case
    if(s>=e){
        return ;
    }
    //getting pivot index
    int p=partition(arr,s,e);
    
    //left part
    quickSort(arr,s,p-1);

    //right part
    quickSort(arr,p+1,e);

}
int main(){

    int arr[5]={2,5,4,3,1};
    int n=5;
    
    //functon calling
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
