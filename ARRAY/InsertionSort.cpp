#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void insertionSort(int arr[], int n){

    for(int i = 1 ; i < n; i++){

        int temp=arr[i];
        
        int j=i-1;
        for(; j >= 0; j--){
            if(arr[j] > temp){
                //shift
                arr[j+1]=arr[j];
            }
            else{ //ruk jao
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main(){

    int size;
    cout<<"Enter the value of size : ";
    cin>>size;

    int arr[100];
    //taking input to array
    for(int i=0;i<size;i++){
        cout<<"The value at the index "<<i<< " is : ";
        cin>>arr[i];
    }

    printArray(arr,size);
    cout<<"The sorted array after insertion sort is "<<endl;
    insertionSort(arr,size);
    printArray(arr,size);
    return 0;
}