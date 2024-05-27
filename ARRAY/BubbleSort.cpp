#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void bubbleSort(int arr[], int n){
    //for round 1 to n-1;
    for(int i=1;i<n;i++){
          bool swapped=false;
          //process till n-i th index
         for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;
            }
         }
         if(swapped==false){
            break;
         }
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
    cout<<"The sorted array after bubble sort is "<<endl;
    bubbleSort(arr,size);
    printArray(arr,size);
    return 0;
}