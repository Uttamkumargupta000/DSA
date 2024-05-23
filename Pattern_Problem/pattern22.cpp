/*          1
           22
          333
         4444
        55555
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
        int space=row-i;
        while(space){
            cout<<" ";
            space--;
        }
        //for printing star
        int j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}