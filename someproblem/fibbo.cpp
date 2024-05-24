#include<iostream>
using namespace std;
int main(){
    int num;
    cout<< " Enter the NUmber : ";
    cin>> num;
    int a=0;
    int b=1;
    cout<<"fibbonacci series are "<< endl;
    cout<< a << " " << b << " ";
    for(int i=1;i<=num;i++){
        int sum=a+b;
        cout<<sum << " ";
        a=b;
        b=sum;
    }
    return 0;
}