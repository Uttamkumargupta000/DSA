/*      *
        **
        ***
        ****
        *****
        ******
*/


#include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    cout<<"Enter the Number of row : ";
    cin>>row;
    int i=1;
    while(i<=row){
        int j=1; //intializing with column
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}