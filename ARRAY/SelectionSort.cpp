#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void selectionSort(int arr[], int n){
    
    for(int i=0;i<n;i++){
        int minIndex=i;

        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j])
            minIndex=j;
        }

        int temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }
}
int main(){

    int size;
    cout<<"Enter the value of size : ";
    cin>>size;

    int arr[100];
    //taking input to array
    for(int i=0;i<size;i++){
        cout<<"The value at the index "<< i << " is : ";
        cin>>arr[i];
    }

    printArray(arr,size);
    cout<<"The sorted array after selection sort is "<<endl;
    selectionSort(arr,size);
    printArray(arr,size);
    return 0;
}