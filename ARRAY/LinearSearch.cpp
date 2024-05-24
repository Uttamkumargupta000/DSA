#include<iostream>
using namespace std;
bool linearSearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    int size;
    cout<<"Enter the value of size : ";
    cin>>size;
    int arr[100];
    //taking input to array
    for(int i=0;i<size;i++){
        cout<<"The value at the index "<< i << " is : ";
        cin>>arr[i];
    }
    //key to search in element
    int key;
    cout<<"Enter the key to search : ";
    cin>>key;
    //function call for linear search
    bool found=linearSearch(arr,size,key);
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }
    return 0;
}