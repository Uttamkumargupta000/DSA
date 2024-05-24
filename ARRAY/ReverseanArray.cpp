#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        arr[start]=arr[end];
        start++;
        end--;
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
    return 0;
}