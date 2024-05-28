#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}
bool isPossible(int arr[],int n, int k, int mid){
    long long int painterCount=1;
    long long int wallSum=0;

    for(int i=0;i<n;i++){
        if(wallSum + arr[i] <=mid){
            wallSum+=arr[i];
        }
        else{
            painterCount++;
            if(painterCount>k || arr[i]> mid){
                return false;
            }
            wallSum=arr[i];
        }
    }
    return true;
}
int painterPartion(int arr[],int n, int k){
    int s=0;
    long long int sum=0;
    
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    long long int e=sum;
    long long int mid = s+(e-s)/2;
    long long int ans =-1;

    while(s<=e){
        if(isPossible(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid =s +(e-s)/2;
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
    cout<<painterPartion(arr,size,3)<<endl;

    printArray(arr,size);
    return 0;
}