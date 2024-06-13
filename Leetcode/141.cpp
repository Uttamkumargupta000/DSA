/*  detect cycle in a linked list  */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        //empty list
        if(head == NULL || head -> next == NULL){
            return false;
        }
        // using two pointer slow and fast 
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};