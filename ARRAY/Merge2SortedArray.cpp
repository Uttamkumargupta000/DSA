#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void merge2Array(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0,j=0,k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    //coping the remaining of first array
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    //coping the remaining element of second array
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}

int main(){

    int size;
    cout<<"Enter the value of size : ";
    cin>>size;

    int arr1[10];
    //taking input to array
    for(int i=0;i<size;i++){
        cout<<"The value at the index "<<i<< " is : ";
        cin>>arr1[i];
    }

    int arr2[4]={2,4,6,8};
    int arr3[8]={0};
    printArray(arr1,size);
    printArray(arr2,4);
    merge2Array(arr1,size,arr2,4,arr3);
    cout<<"The merged arrayes are : "<<endl;
    printArray(arr3,8);
    return 0;
}