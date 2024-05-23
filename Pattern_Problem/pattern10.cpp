/*      AAAAA
        BBBBB
        CCCCC
        DDDDD
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
        char ch='A'+i-1;
        int j=1;
        while(j<=row){
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}