/*      A
        BB
        CCC
        DDDD
        EEEEE
*/


#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the Number of row : ";
    cin>>row;
    int i=1;
    while(i<=row){
        int j=1; //intializing with column
        while(j<=i){
            char ch ='A'+i-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}