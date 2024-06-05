#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    cout<<"size of an array is "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool LinearSearch(int arr[], int n, int key){
    printArray(arr,n);
    //base condition
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        //recursicve call
        LinearSearch(arr+1,n-1,key);
    }

}
int main(){
    
    int arr[5]={3,5,1,2,6};
    int size=5;
    int key=2;

    bool ans=LinearSearch(arr,size,key);
    if(ans){
        cout<<"Key is present "<<endl;
    }
    else{
        cout<<"Key is not present "<<endl;
    }
    return 0;
}