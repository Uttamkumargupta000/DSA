#include<bits/stdc++.h>
using namespace std;

int power(int n){
    if(n==0)
        return 1;
    
    return 2*power(n-1);
}

int main(){

    int n;
    cout<<"Enter the  value of n : ";
    cin >> n;
    cout<<"The  2 power of  "<< n <<" : "<<power(n)<<endl;

    return 0;
}