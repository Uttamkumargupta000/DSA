#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int d){
        this->data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* buildTree(Node* root){
    cout<<"Enter the root data : "<<endl;
    int data;
    cin >> data;

    root = new Node(data);

    if(data == -1){
        return NULL;
    }
    //left part of tree structure 
    cout<<"Enter the data in the left part : "<< data <<endl;
    root -> left = buildTree(root -> left);

    //right part of tree structure
    cout<<"Enter the data to be added in the right part : "<< data << endl;
    root -> right = buildTree(root -> right);

    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    //for seprator
    q.push(NULL);

    while (!q.empty()){
        Node* temp = q.front();
        q.pop();

        // either of level is completed
        if(temp == NULL){
            cout<<endl;
            //queue still have some child nodes  
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< temp -> data << " ";
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

void levelOrderTraversalReverse(Node* root){
    vector<int> ans;
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        Node* temp = q.front();
        ans.push_back(temp -> data);

        //first right part to be added then left
        if(temp -> right){
            q.push(temp -> right);
        }
        if(temp -> left){
            q.push(temp -> left);
        }
        q.pop();
    }
    //reverse the array 
    reverse(ans.begin(), ans.end());
    //printing the order value 
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

//in order traversal L N R
void inOrder(Node* root){
    //base case
    if(root == NULL){
        return ;
    }

    inOrder(root -> left);
    cout<<root -> data << " ";
    inOrder(root -> right);
}

//pre order traversal N L R
void preOrder(Node* root){
    //base case
    if(root == NULL){
        return ;
    }

    cout<<root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);
}

//post order traversal L R N
void postOrder(Node* root){
    //base case
    if(root == NULL){
        return ;
    }

    postOrder(root -> left);
    postOrder(root -> right);
    cout<<root -> data << " ";
}

void buildFromLevelOrder(Node* &root){

    queue<Node*> q;
    cout<<"Enter the data for root  : "<<endl;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);

    //check for q is not empty
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        //left part me daal do
        cout<<"Enter the data to put in left part : "<<temp -> data <<endl;
        int leftData;
        cin >> leftData;
        
        if(leftData != -1){
            temp -> left = new Node(leftData);
            q.push(temp -> left);
        }

        //right part me daal do
        cout<<"Enter the data to put in right part : "<<temp -> data <<endl;
        int rightData;
        cin >>rightData;
        
        if(rightData != -1){
            temp -> left = new Node(rightData);
            q.push(temp -> left);
        }
    }
}

void deletedeepestNode(Node* root, Node* key){
    //base case
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        //if exist at the front or top element is key 
        if(temp == key){
            key = NULL;
            delete key;
            return;
        }

        //right part ke exist then delete it
        if(temp -> right == key){
            temp -> right = NULL;
            delete (key);
            return ;
        }
        else{
            q.push(temp -> right);
        }

        //left part me exists then delete it
        if(temp -> left == key){
            temp -> left = NULL;
            delete (key);
            return ;
        }
        else{
            q.push(temp -> left);
        }
    }
}

int main(){

    Node* root = NULL;

    //creating root 
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    //printing the tree structure 
    cout<<"Printing the level order traversal output "<<endl;
    levelOrderTraversal(root);

    //printing the reverse order of value in tree
    cout<<"Reverse the level order traversal output "<<endl;
    levelOrderTraversalReverse(root);
    

    //inorder traversal
    cout<<endl<<"Inorder traversal is : "<<endl;
    inOrder(root);

    //Preorder traversal
    cout<<endl<<"Preorder traversal is : "<<endl;
    preOrder(root);

    //postorder traversal
    cout<<endl<<"postorder traversal is : "<<endl;
    postOrder(root); 

    //build from level order 
    //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1
    // cout<<endl<<"build from level Order "<<endl;
    // buildFromLevelOrder(root);
    // levelOrderTraversal(root);
    
    return 0;
}