 #include <bits/stdc++.h> 
using namespace std;

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}
bool isPossible(int arr[], int n, int k, int mid){

    int cowCount=1;
    int lastPos=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] - lastPos >= mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}
int aggresiveCow(int arr[], int n, int k){
    //use sorting here then proceed for the result
    sort(arr,arr+n);
    int s=0;
    int maxi = -1;

    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(isPossible(arr,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){

    int size;
    cout<<"Enter the value of size : ";
    cin>>size;

    int arr[10];
    //taking input to array
    for(int i=0;i<size;i++){
        cout<<"The value at the index "<<i<< " is : ";
        cin>>arr[i];
    }
    cout<<"the value of aggresive cows is : "<<aggresiveCow(arr,size,2)<<endl;

    printArray(arr,size);
    return 0;
}