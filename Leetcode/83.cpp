/* Remove duplicate from sorted list */

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        //empty list
        if(head == NULL){
            return NULL;
        }
        ListNode* curr = head;
        while(curr != NULL){
            if((curr->next != NULL) && curr->val == curr->next->val){
                ListNode* next= curr->next->next;;
                ListNode* nodeToDelete = curr->next;
                delete nodeToDelete;
                curr-> next = next;
            }
            else{
                curr = curr -> next;
            }
        }
        return head;
    }
};