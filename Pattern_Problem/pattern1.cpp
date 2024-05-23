/*      ******
        ******
        ******
        ******
*/


#include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    cout<<"Enter the Number of row : ";
    cin>>row;
    cout<<"Enter the Number of column : ";
    cin>>col;
    int i=1;
    while(i<=row){
        int j=1;
        while(j<=row){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}