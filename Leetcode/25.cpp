/* Reverse Nodes in k- group */

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        //base case or check the k node to reverse
        ListNode* temp = head;
        for(int i=0; i<k ;i++){
            if(temp == NULL){
                return head;
            }
            temp = temp -> next;
        }

        //reverse first k nodes
        ListNode* next = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int count = 0;


        while(curr!= NULL && count < k){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        //recursive call 
        if(next != NULL){
            head ->next = reverseKGroup(next, k);
        }
        //returing the head pointer
        return prev;
    }