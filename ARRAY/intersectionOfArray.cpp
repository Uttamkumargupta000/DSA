#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
vector<int> intersection(int arr[], int n, int arr2[], int m){
    vector<int> ans;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr[i]==arr2[j]){
            ans.push_back(arr[i]);
            i++;
            j++;
        }
        else if(arr[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void printVector(const vector<int>& vec) {
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
}
int main(){
    int size;
    cout<<"Enter the value of size : ";
    cin>>size;
    int arr[10];
    int arr2[4]={2,2,3,3};
    //taking input to array
    for(int i=0;i<size;i++){
        cout<<"The value at the index "<< i << " is : ";
        cin>>arr[i];
    }
    printArray(arr,size);
    printArray(arr2,4);
    vector<int> result=intersection(arr,size,arr2,6);
    cout<<"Intersection of the arrays: ";
    printVector(result);
    printArray(arr,size);
    return 0;
}