/*      1
        21
        321
        4321
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
            cout<<i-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}