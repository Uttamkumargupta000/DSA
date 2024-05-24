#include<iostream>
using namespace std;
int main(){
    int num;
    bool isPrime=1;
    cout<< " Enter the number : ";
    cin >> num;
    for(int i=2;i<num;i++){
        if(num%i==0){
            // cout << "NOt a Prime Number " << endl;
            isPrime=0;
            break;
        }
    }
    if(isPrime==0){
        cout<<"Not a Prime Number"<<endl;
    }
    else{
        cout<<"A Prime Number" <<endl;
    }
    return 0;
}