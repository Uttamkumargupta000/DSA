#include<iostream>
using namespace std;
void swapAlternate(int arr[], int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
    swapAlternate(arr,size);
    printArray(arr,size);
    return 0;
}