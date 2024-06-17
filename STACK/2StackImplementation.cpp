#include<bits/stdc++.h>
using namespace std;

class TwoStack {
    //properties
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    //constructor
    TwoStack(int s){
        this->size =s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    //push operation in stack1
    void push(int num){
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }
        else{
            cout<<"Stack over flow "<<endl;
        }
    }

    //push operation in stack2
    void push(int num){
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }
        else{
            cout<<"Stack over flow "<<endl;
        }
    }

    //pop operation in stack 1
    int pop(){
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

    //pop operation in stack 2
    int pop(){
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
};

int main(){

    return 0;
}