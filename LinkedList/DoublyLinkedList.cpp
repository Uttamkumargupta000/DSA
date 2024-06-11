#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    //destructor
    ~Node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free with node with data : "<<value<<endl;
    }
};

void InsertAtHead(Node* &head, Node* & tail, int d){
    
    //empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head= temp;
        tail=temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

void InsertAtTail(Node* &head, Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail= temp;
        head= temp;
    }
    else{
        Node* temp = new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}

void InsertAtPosition(Node* &tail, Node* &head, int position, int d){
    //insert at starting position
    if(position == 1){
        InsertAtHead(head,tail,d);
        return ;
    }

    Node* temp = head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }

    //adding at last position
    if(temp->next== NULL){
        InsertAtTail(head,tail,d);
        return ;
    }

    // middle element addition
    Node* nodeToStart = new Node(d);
    nodeToStart->next=temp->next;
    temp->next->prev=nodeToStart;
    temp->next=nodeToStart;
    nodeToStart->prev=temp;

}

void print(Node* &head){
    Node* temp=head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    int len=0;
    Node* temp = head;
    
    while(temp != NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void deleteNode(int position, Node* &head){
    //deleting first or starting node
    if(position == 1){
        Node* temp = head;
        temp->next->prev=NULL;
        head = temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int count=1;
        while(count< position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<getLength(head) <<endl;

    InsertAtHead(head,tail,11);
    print(head);

    InsertAtHead(head,tail,13);
    print(head);

    InsertAtHead(head,tail,8);
    print(head);

    InsertAtTail(head,tail,25);
    print(head);

    InsertAtPosition(tail, head, 2, 100);
    print(head);

    InsertAtPosition(tail, head, 1, 101);
    print(head);

    InsertAtPosition(tail, head, 8, 102);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;

    deleteNode(8,head);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;

    return 0;
}