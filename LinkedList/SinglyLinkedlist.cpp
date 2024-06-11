#include<iostream>
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
        //memeory free
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free with for node with data "<< value <<endl;
    }
};

void InsertAtHead(Node* &head, int d){

    Node * temp= new Node(d);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &tail, int d){

    Node * temp = new Node(d);
    tail->next=temp;
    tail=temp;
}

void InsertAtPosition(Node* &tail, Node* &head, int position, int d){
    //insert at starting position
    if(position == 1){
        InsertAtHead(head,d);
        return ;
    }

    Node* temp = head;
    int count=1;

    while(count<position-1){
        temp=temp->next;
        count++;
    }

    //creating node to add this position
    Node* nodeToStart = new Node(d);
    nodeToStart->next=temp->next;
    temp->next=nodeToStart;

    //inserting at last position
    if(temp->next == NULL){
        InsertAtTail(tail,d);
        return ;
    }
}

void deleteNode(int position, Node* &head){
    //deleting the starting position
    if(position == 1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle or last position
        Node * curr = head;
        Node* prev = NULL;
        int count=1;

        while(count < position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void print(Node* &head){

    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){

    //created a new node
    Node* node1 =new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    //head pointed to new node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    // InsertAtHead(head,12);
    // print(head);
    InsertAtTail(tail,12);
    print(head);

    // InsertAtHead(head,15);
    // print(head);
    InsertAtTail(tail,15);
    print(head);

    InsertAtPosition(tail,head,3,14);
    print(head);

    InsertAtPosition(tail,head,1,8);
    print(head);

    InsertAtPosition(tail,head,6,56);
    print(head);

    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;

    // deleteNode(6,head);
    // print(head);


    return 0;
}