/*advance pointer*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={2,3,5};
    cout<<"Address of first memory block is : "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first memory block is : "<<&arr[0]<<endl;

    cout<<"1st : "<<*arr<<endl;
    cout<<"2nd  : "<<*arr + 2<<endl;
    cout<<"Adress of 4th memory block is : "<<&arr[4]<<endl;

    //print the value at index 2in an array
    int i=2;
    cout<<i[arr]<<endl;

    int temp[10];
    cout<<"The size of tmep : "<<sizeof(temp)<<endl;
    cout<<"1st "<<sizeof(*temp)<<endl;
    cout<<"2nd "<<sizeof(&temp)<<endl;

    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;

    int a[20]={1,2,3,4,5};
    cout<<" 1 " << &a[0] <<endl;
    cout<<" 2 "<< &a <<endl;
    cout<< " 3 "<<a << endl;

    int *p = &a[0];
    cout<<" 4 " << &p <<endl;
    cout<<" 5 "<< *p <<endl;
    cout<<" 6 "<<p << endl;


    int arr1[5] = {1,2,3,4,5};
    char ch[6] = "abcde";


    cout << arr1 << endl;
    //attention here
    cout << ch << endl;
    
    char *c = &ch[0];
    //prints entire string
    cout << c << endl;

    char tem = 'z';
    char *p = &tem;

    cout << p << endl;



    return 0;
}