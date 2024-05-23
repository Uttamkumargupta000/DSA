/*      D
        CD
        BCD
        ABCD
*/


#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the Number of row : ";
    cin>>row;
    int i=1;
    while(i<=row){
        char ch ='A'+row-i;
        int j=1; //intializing with column
        while(j<=i){
            cout<<ch;
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}