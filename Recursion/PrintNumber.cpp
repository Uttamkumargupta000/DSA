#include<bits/stdc++.h>
using namespace std;

void printNumber(int n){
    if(n==0)
        return ;
    
    printNumber(n-1);
    cout<< n << " ";
}

int main(){

    int n;
    cout<<"Enter the  value of n : ";
    cin >> n;
    cout<<"The counting number are "<< n <<" : "<<endl;
    printNumber(n);
    return 0;
}