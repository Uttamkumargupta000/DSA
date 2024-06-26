#include<bits/stdc++.h>
using namespace std;

class Stack {

    //properties
    public:
    int *arr;
    int size;
    int top;

    //constructor or behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    //push operation
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack overflow "<<endl;
        }
    }

    //pop operation
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack Underflow "<<endl;
        }
    }

    //get top value
    int peek() {
        if(top >= 0)
            return arr[top];
        else{
            cout<<"Stack is empty "<<endl;
            return -1;
        }
    }

    // check for empty 
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else
            return false;
    }

};

int main(){

    //Stack implementation without stl
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is Empty dear "<<endl;
    }
    else{
        cout<<"Stack is not Empty dear "<<endl;
    }


    /*  using stl in stack 
    //creation of stack 
    stack<int> s;

    //push operation 
    s.push(2);
    s.push(3);

    //pop operation
    s.pop();

    cout<<"Printing top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty " <<endl;
    }
    else{
        cout<<"stack is not empty "<<endl;
    }

    cout<<"size of stack is "<<s.size()<<endl;

    */
    return 0;
}