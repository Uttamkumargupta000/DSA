#include<bits/stdc++.h>
using namespace std;

int getSum(int arr[], int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int sum=arr[0]+getSum(arr+1,n-1);
    return sum;
}
int main(){

    int arr[5]={1,5,4,6,3};
    cout<<"sum of element present in an array is : "<<getSum(arr,5)<<endl;
    return 0;
}