#include<iostream>
using namespace std;
void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

int BinarySearch(int arr[], int n, int key){

    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main(){
    int size;
    cout<<"Enter the value of size : ";
    cin>>size;
    int arr[10];
    //taking input to array
    for(int i=0;i<size;i++){
        cout<<"The value at the index "<< i << " is : ";
        cin>>arr[i];
    }
    //taking key to search element
    int key;
    cout<<"Enter the key : ";
    cin>>key;

    printArray(arr,size);
    cout<<"The index of " << key << " is "<<BinarySearch(arr,size,key)<<endl;
    printArray(arr,size);
    return 0;
}