#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}
bool isPossible(int arr[], int size, int n, int m, int mid){
    int studentCount=1;
    int pageSum=0;

    for(int i=0;i<n;i++){
        if(pageSum + arr[i] <= mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

int allocationBooks(int arr[],int size, int n, int m){
    int s=0;
    int sum=0;
    
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(isPossible(arr,size,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid =s+(e-s)/2;
    }
    return ans;
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
    cout<<allocationBooks(arr,size,4,2)<<endl;

    printArray(arr,size);
    return 0;
}