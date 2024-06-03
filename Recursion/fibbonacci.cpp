#include<bits/stdc++.h>
using namespace std;

int fibbonacci(int n){
    if(n==0){
        return 0;
    }
    
    if(n==1){
        return 1;
    }
    // cout<< n <<" ";
    return fibbonacci(n-1) + fibbonacci(n-2);
}
int main(){

    int n;
    cout<<"Enter the value : ";
    cin >> n;

    cout<<"The fibbonaccin sequence is : "<<endl;
    cout<<fibbonacci(n);

    return 0;
}