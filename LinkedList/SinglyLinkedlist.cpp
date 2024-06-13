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
    //empty list
    if(head == NULL){
        cout<<"list is empty "<<endl;
        return ;
    }
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool isCircularList(Node* head){
    //empty list
    if(head == NULL){
        return true;
    }

    Node* temp = head ->next;
    while(temp !=NULL && temp != head){
        temp = temp ->next;
    }

    if(temp == head){
        return true;
    }

    return false;
}

bool detectLoop(Node* head){

    //empty list 
    if(head == NULL){
        return false;
    }

    map<Node*, bool> visited;
    Node* temp =head;

    while(temp != NULL){
        if(visited[temp] == true){
            cout<<"cycle is present : "<<temp->data<<endl;
            return true;
        }
        visited[temp] = true;
        temp = temp ->next;
    }
    return false;
}

Node* floyDetectLoop(Node* head){

    if(head== NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;
    
    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast =fast ->next;
        }
        slow = slow ->next;
        
        if(slow == fast){
            cout<<"present at : "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){

    //empty node
    if(head == NULL){
        return NULL;
    }
    Node* intersection = floyDetectLoop(head);
    if(intersection == NULL){
        return NULL;
    }
    Node* slow = head;
    while(slow != intersection){
        slow =slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

Node* removeLoop(Node* head){

    //empty list
    if(head == NULL){
        return NULL;
    }

    Node* startLoop = getStartingNode(head);
    if(startLoop == NULL){
        return head;
    }
    Node* temp = startLoop;
    while(temp -> next != startLoop){
        temp = temp -> next;
    }
    temp -> next = NULL;
    return head;
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


    deleteNode(6,head);
    print(head);

    tail -> next = head ->next;
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    // print(head);

    //detection of loop in a linkedlist
    if(floyDetectLoop(head) != NULL){
        cout<<"cycle is present " <<endl;
    }
    else{
        cout<<"cycle is not present "<<endl;
    }

    //beginning of loop in a linkedlist
    Node* loop = getStartingNode(head);
    cout<<"loop start at : "<<loop -> data<<endl;

    //remove loop in a linkedlist
    removeLoop(head);
    print(head);

    //detection of a circular loop in a linkedlist
    if(isCircularList(head)){
        cout<<"LinkedList is circular in nature "<<endl;
    }
    else{
        cout<<"LinkedList is not circular in nature "<<endl;
    }

    return 0;
}