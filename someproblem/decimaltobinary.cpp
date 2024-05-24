/* Decimal to Binary conversion*/

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    int ans=0,i=0;
    cout << "Enter the number ";
    cin >> num;
    while(num!=0){
        int bits = num & 1;
        ans = (bits * pow(10,i)) + ans;
        num = num >> 1;
        i++;
    }
    cout << "answer is " << ans << endl;
    return 0;
}