
#include<iostream>
using namespace std;
int findUnique(int arr[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
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
    cout<<findUnique(arr,size)<<endl;
    printArray(arr,size);
    return 0;
}