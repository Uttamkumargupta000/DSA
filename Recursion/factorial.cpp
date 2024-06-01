#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0)
        return 1;

    return n* factorial(n-1);
}
int main(){

    int n;
    cout<<"The value of n : ";
    cin >> n;
    cout<<"the factorial of  "<< n <<" : "<<factorial(n)<<endl;
    
    return 0;
}