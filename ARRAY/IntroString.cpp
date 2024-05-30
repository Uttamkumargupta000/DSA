#include<bits/stdc++.h>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch -'A' + 'a';
        return temp;
    }
}
bool checkPalidrone(char name[], int n){
    int s=0;
    int e=n-1;

    while (s<e)
    {
        if(toLowerCase(name[s]) != toLowerCase(name[e])){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}

char getMaxOccurence(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number =0;
        if(ch>='a' && ch<='z'){
            number=ch-'a';
        }
        else{
            number =ch-'A';
        }
        arr[number]++;
    }
    //find maximum occurence
    int maxi = -1, ans = 0;
    for(int i=0;i<26;i++){
        if(maxi < arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    return 'a'+ans;
}
void reverse(char name[], int n){
    int s=0;
    int e=n-1;

    while (s<e)
    {
        char temp=name[s];
        name[s]=name[e];
        name[e]=temp;
        s++;
        e--;
    }
}
int getLength(char name[]){
    
    int count=0;

    for(int i=0;name[i]!='\0';i++){
        count++;
    }

    return count;
}
int main(){
    char name[20];
    cout<<"ENter your name : ";
    cin>>name;

    cout<<"your name is : "<<name<<endl;

    int len=getLength(name);
    cout<<"Length is : "<<len<<endl;

    reverse(name, len);
    cout<<"Your name after the reverse is :  "<<name<<endl;

    cout<<"palidrome or not : "<<checkPalidrone(name,len)<<endl;

    cout<<"character is : "<<toLowerCase('b')<<endl;
    cout<<"character is : "<<toLowerCase('B')<<endl;

    string s;
    cout<<"Enter the string : ";
    cin>>s;
    cout<<"The maximum occurence is : "<<getMaxOccurence(s)<<endl;
    return 0;
}