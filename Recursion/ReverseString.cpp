#include<bits/stdc++.h>
using namespace std;

void reverseString(string& str, int i, int j){
    
    cout<<"call received for "<<str<<endl;

    //base case
    if(i>j)
        return ;
    
    int temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;

    //recursive call
    reverseString(str,i,j);
}
int main(){

    string name = "abcde";
    reverseString(name,0,name.length()-1);
    cout<<name<<endl;
    return 0;
}