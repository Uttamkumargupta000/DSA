/* detect loop in linked list cycle 2*/

class Solution {
    private:
    ListNode* floyDetectionLoop(ListNode* head){
        //empty list
        if(head == NULL){
            return NULL;
        }
        //two pointer appraoch to detect a loop in linkedlist
        ListNode* slow = head;
        ListNode* fast = head;

        while(slow != NULL && fast != NULL){
            fast = fast -> next;
            if(fast != NULL){
                fast = fast ->next;
            }
            slow = slow -> next;
            //both pointer meet at a point
            if(slow == fast){
                return slow;
            }
        }
        return NULL;
    }
public:
    ListNode *detectCycle(ListNode *head) {
        //empty list 
        if(head == NULL){
            return NULL;
        }
        //checking for loop 
        ListNode* intersection = floyDetectionLoop(head);
        if(intersection == NULL){
            return NULL;
        }
        ListNode* slow = head;

        // moving the both pointer to meet at starting point
        while(slow != intersection){
            slow = slow -> next;
            intersection = intersection -> next;
        }
        return slow;
    }
};