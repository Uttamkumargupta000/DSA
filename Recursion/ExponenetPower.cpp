#include<iostream>
using namespace std;

int Power(int a, int b){

    //base case
    if(b==0){
        return 1;
    }
    if(b==0){
        return a;
    }

    //recursive call

    if(b%2==0){
        return Power(a,b/2)*Power(a,b/2);
    }
    else{
        return a*Power(a,b/2)*Power(a,b/2);
    }

}
int main(){

    int a, b;
    cout<<"Enter the values of a and b : ";
    cin>>a>>b;

    cout<<"The exponenet power of "<<a <<" to the power"<<b<< " is "<<Power(a,b)<<endl;

    return 0;
}