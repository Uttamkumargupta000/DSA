/*      12*******21
        123*****321
        1234***4321
        12345*54321
        123456654321

*/

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the Number of row : ";
    cin>>row;
    int i=1;

    while (i <= row) {
        int j = 0;

        // Print the first half of the row
        while (j <= i) {
            cout << j + 1;
            j++;
        }

        // Print the stars
        j = 0;
        while (j < (row - i) * 2 - 1) {
            cout << "*";
            j++;
        }

        // Print the second half of the row
        j = i;
        while (j >= 0) {
            cout << j + 1;
            j--;
        }

        cout <<endl;
        i++;
    }

    return 0;
}
