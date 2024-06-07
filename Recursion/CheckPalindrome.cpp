#include<bits/stdc++.h>
using namespace std;

bool palindrome(string str, int i, int j){

    //base case
    if(i>j)
        return true;
    
    if(str[i]!=str[j]){
        return false;
    }
    else{
        //recursive call
        return palindrome(str,i+1,j-1);
    }
}

int main(){

    string name="abbccbba";
    cout<<endl;

    bool ans = palindrome(name, 0, name.length()-1);

    if(ans){
        cout<<"Yes it is palindrome "<<endl;
    }
    else{
        cout<<"NO! not a palindrome"<<endl;
    }
    return 0;
}