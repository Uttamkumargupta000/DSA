#include<bits/stdc++.h>
using namespace std;

bool LinearSearch(int arr[], int n, int key){
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
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