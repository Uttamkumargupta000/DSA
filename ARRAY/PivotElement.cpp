#include<iostream>
using namespace std;
void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

int pivot(int arr[], int n){
    int s=0, e=n-1;
    int mid = s + (e-s)/2;
    while(s < e){
         
         if(arr[mid] >= arr[0]){
            s = mid + 1;
         }
         else{
            e = mid;
         }
         mid = s + (e-s)/2;
    }
    return s;
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
    
    printArray(arr,size);
    cout<< "The pivot element is at index "<<pivot(arr,size)<<endl;
    return 0;
}