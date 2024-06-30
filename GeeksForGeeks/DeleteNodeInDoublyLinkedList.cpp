/* Delete Node in a doubly linked list */

class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        
        //deleting the starting node
        if(x == 1){
            Node* temp = head;
            // temp -> next -> prev = NULL;
            head = temp -> next;
            temp -> next = NULL;
            return head;
        }
        
        //deleting any middle or last node
        else{
            
            Node* curr = head;
            Node* prev = NULL;
            
            int count = 1;
            
            while(count < x){
                prev = curr;
                curr = curr -> next;
                count++;
            }
            
            curr -> prev = NULL;
            prev -> next = curr -> next;
            curr -> next = NULL;
            
        }
        
        return head;
    }
};