/*           1
           1 2 1
         1 2 3 2 1
       1 2 3 4 3 2 1
*/

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the Number of row : ";
    cin>>row;
    int i=1;
    while(i<=row){
        //Printin space 
        int space=row-i;
        while(space){
            cout<<" ";
            space--;
        }
        //printing first triangle
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        //printing last triangle
        int start=i-1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}