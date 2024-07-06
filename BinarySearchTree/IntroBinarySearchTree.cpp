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

Node* deleteFromBST(Node* root, int val){

    //base case
    if(root == NULL){
        return NULL;
    }
    if(root -> data == val){
        // 0 child case
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
        // 1 child case 
        //left subtree
        if(root -> left != NULL && root -> right == NULL){
            Node* temp = root -> left;
            delete root;
            return temp;
        }
        //right subtree
        if(root -> right != NULL && root -> left == NULL){
            Node* temp = root -> right;
            delete root;
            return temp;
        }
        //2 child case
        if(root -> left != NULL && root -> right != NULL){
            int mini = minValue(root -> right) -> data;
            root -> data = mini;
            root ->right = deleteFromBST(root -> right, mini);
            return root;
        }
    }
    // value is greater then root -> data
    else if(root -> data > val){
        root -> left = deleteFromBST(root -> left , val);
        return root;
    }
    else{
        root -> right = deleteFromBST(root -> right, val);
    }
}

int main(){

    Node* root = NULL;

    //insertion in BST
    cout<<"Enter the data to create the BST "<<endl;
    takeInput(root);

    //Traversal of BST
    cout<<"Printing the BST "<<endl;
    levelOrderTraversal(root);

    //deletion in bst
    root = deleteFromBST(root, 50);

    cout<<endl<<"Printing inOrder "<<endl;
    inOrder(root);

    cout<<endl<<"Printing preOrder "<<endl;
    preOrder(root);

    cout<<endl<<"Printing postOrder "<<endl;
    postOrder(root);

    cout<<"Printing the BST "<<endl;
    levelOrderTraversal(root);

    //max value in BST
    cout<<endl<<"Maximum value of this BST Is : "<<maxValue(root) -> data <<endl;

    //min value in BST
    cout<<endl<<"Minimum value of this BST Is : "<<minValue(root) -> data <<endl;

    return 0;
}