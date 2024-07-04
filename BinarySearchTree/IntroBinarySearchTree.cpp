#include<iostream>
#include<queue>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right= NULL;
    }
};

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            
            //child node exist 
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp -> data << " ";
            //left part is not empty
            if(temp -> left){
                q.push(temp -> left);
            }
            //right part is not empty
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

void inOrder(Node* root){
    //base case
    if(root == NULL){
        return ;
    }
    inOrder(root -> left);
    cout<< root -> data << " ";
    inOrder(root -> right);
}

void preOrder(Node* root){
    //base case
    if(root == NULL){
        return ;
    }
    cout<< root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);
}

void postOrder(Node* root){
    //base case
    if(root == NULL){
        return ;
    }
    postOrder(root -> left);
    postOrder(root -> right);
    cout<< root -> data << " ";
}

Node* insertIntoBst(Node* &root, int d){

    if(root == NULL){
        root = new Node(d);
        return root;
    }
    //given data is greater than root data  then add to the right part 
    if(d > root -> data){
        root -> right = insertIntoBst(root -> right, d);
    }
    //given data is lesser than root data then add to the left part
    else{
        root -> left = insertIntoBst(root -> left, d);
    }
    return root;
}

void takeInput(Node* &root){
    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoBst(root, data);
        cin >> data;
    }
}

Node* minValue(Node* root){
    Node* temp = root;

    while(temp -> left != NULL){
        temp = temp -> left;
    }
    return temp;
}

Node* maxValue(Node* root){
    Node* temp = root;

    while(temp -> right != NULL){
        temp = temp -> right;
    }
    return temp;
}

int main(){

    Node* root = NULL;

    cout<<"Enter the data to create the BST "<<endl;
    takeInput(root);

    cout<<"Printing the BST "<<endl;
    levelOrderTraversal(root);

    cout<<endl<<"Printing inOrder "<<endl;
    inOrder(root);

    cout<<endl<<"Printing preOrder "<<endl;
    preOrder(root);

    cout<<endl<<"Printing postOrder "<<endl;
    postOrder(root);

    cout<<endl<<"Maximum value of this BST Is : "<<maxValue(root) -> data <<endl;

    cout<<endl<<"Minimum value of this BST Is : "<<minValue(root) -> data <<endl;

    return 0;
}