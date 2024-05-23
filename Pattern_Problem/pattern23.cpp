/*      1234
         234
          34
           4
*/

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the Number of row : ";
    cin>>row;
    int i=1;
    while(i<=row){
        //for space printing
        int space=i-1;
        while(space){
            cout<<" ";
            space--;
        }
        //for printing star
        int j=1;
        while(j<=row-i+1){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}