#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory free with node with data "<<value<<endl;
    }
};

void InsertAtNode(Node* &tail, int element, int d){
    //empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail= newNode;
        newNode->next=newNode;
    }
    else{
        //non empty list
        Node* curr= tail;
        
        while(curr->data != element){
            curr= curr->next;
        }

        Node* temp= new Node(d);
        temp->next= curr->next;
        curr->next=temp;
    }
}

void print(Node* &tail){
    Node* temp = tail;
    //empty list linkedlist
    if(tail == NULL){
        cout<<"Tail is empty "<<endl;
        return ;
    }
    
    do{
        cout<<tail->data<<" ";
        tail= tail->next;
    }while(tail != temp);
    cout<<endl;
}

void deleteNode(Node* &tail, int value){
    //empty list
    if(tail == NULL){
        cout<<"List is empty , please check again"<<endl;
    }
    else{
        //non empty list
        Node* prev=tail;
        Node* curr= prev->next;

        while(curr->data != value){
            prev = curr;
            curr=curr->next;
        }
        prev->next=curr->next;

        //1 Node linked list
        if(curr== prev){
            tail = NULL;
        }
        // >=2 Node linked list
        if(tail == curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

int main(){

    Node* tail = NULL;

    InsertAtNode(tail,5,3);
    print(tail);

    InsertAtNode(tail,3,5);
    print(tail);

    InsertAtNode(tail,5,7);
    print(tail);

    InsertAtNode(tail,7,9);
    print(tail);

    InsertAtNode(tail,5,6);
    print(tail);

    InsertAtNode(tail,9,10);
    print(tail);

    InsertAtNode(tail,3,4);
    print(tail);

    deleteNode(tail,5);
    print(tail);

    return 0;
}