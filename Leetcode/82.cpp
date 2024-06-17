/*  Remove Duplicate from Sorted List */

class Solution {
private:
    ListNode* deleteNode(ListNode* &head) {
        // If the list is empty or has only one node, return it
        if(head == NULL || head->next == NULL) 
            return head;
        
        // If the next node has the same value as the current node
        if(head->next->val == head ->val) {
            // Delete all nodes with the same value
            while(head->next != NULL && head->next->val == head->val) {
                ListNode* del = head->next;
                head->next = head->next->next;
                delete del;
            }
            // Delete the current node
            ListNode* del2 = head;
            head = head->next;
            delete del2;
            // Recursively call the function for the remaining list
            if(head != NULL)
                 return deleteNode(head);
            else 
                return head;
        }
        else {
            // Recursively call the function for the next node
            if(head->next != NULL) 
                return deleteNode(head->next);
            else 
                return head;
        }
        return head;
    }
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Call the deleteNode function to delete duplicates
        deleteNode(head);

        return head;
    }
};