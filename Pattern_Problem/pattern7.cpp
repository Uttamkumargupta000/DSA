/*      1
        23
        456
        78910
*/


#include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    cout<<"Enter the Number of row : ";
    cin>>row;
    int i=1;
    int k=1;
    while(i<=row){
        int j=1; //intializing with column
        while(j<=i){
            cout<<k;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}