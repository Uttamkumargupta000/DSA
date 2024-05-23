/*      ABC
        DEF
        GHI
*/


#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the Number of row : ";
    cin>>row;
    int i=1;
    char ch ='A';
    while(i<=row){
        int j=1; //intializing with column
        while(j<=row){
            cout<<ch;
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}