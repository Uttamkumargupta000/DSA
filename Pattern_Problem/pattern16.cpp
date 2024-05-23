/*      A
        BC
        CDE
        DEFG
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
            char ch ='A'+i+j-2;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}