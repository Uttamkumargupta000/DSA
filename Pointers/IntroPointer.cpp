#include<bits/stdc++.h>
using namespace std;
int main(){

    int num=5;
    cout<<"The value of num is : "<<num<<endl;
    //address of operator - &
    cout<<"address of num is : "<< &num<<endl;

    int *ptr=&num;
    cout<<"Address is : "<<ptr<<endl;
    cout<<"value is : "<<*ptr<<endl;

    double d=4.3;
    double *p2=&d;

    cout<<"Address is : "<< p2<<endl;
    cout<<"value is : "<<*p2<<endl;

    cout<<"SIze of integer is "<<sizeof(num)<<endl;
    cout<<"SIze of pointer is "<<sizeof(ptr)<<endl;
    cout<<"SIze of pointer is "<<sizeof(p2)<<endl;

    int *p=&num;
    cout<<"before : "<<num<<endl;
    (*p)++;
    cout<<"after : "<<num<<endl;

    int *q=p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    int i=3;
    int *t = &i;
    // cout<< *t++ <<endl;
    *t = *t + 1;
    cout<< *t <<endl;
    cout<<"before t : "<<t <<endl;
    t = t + 1;
    cout<<"After t : "<<t<<endl;
    
    return 0;
}