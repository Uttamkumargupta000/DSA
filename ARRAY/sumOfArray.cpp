#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}
int  reverse(int arr[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
    return arr[n];
}
int sumOfArray(int arr1[], int n, int arr2[], int m){
    int i=n-1;
    int j=m-1;
    int arr[10];
    int carry=0, k=0;

    while(i>=0 && j>=0){
        int val1=arr1[i];
        int val2=arr2[j];

        int sum = val1 + val2 + carry;
        carry=sum/10;
        sum=sum%10;
        arr[k]=sum;
        i--;
        j--;
        k++;
    }
    while(i>=0){
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        arr[k] = sum;
        k++;
        i--;
    }
    while(j>=0){
        int sum = arr2[i] + carry;
        carry = sum /10;
        sum = sum %10;
        arr[k] = sum;
        k++;
        j--;
    }
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum=sum%10;
        arr[k]=sum;
        k++;
    }
    int rev=reverse(arr,10);
     return rev;
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

    int arr2[4]={1,2,3,4};
    printArray(arr1,size);
    // reverse(arr1,size);
    printArray(arr2,4);
    cout<<"The array after the sum is "<<sumOfArray(arr1,size,arr2,4)<<endl;


    return 0;
}