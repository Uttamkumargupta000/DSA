/*  Palindrome LInked List in Linked list  */

class Solution {
    private:
    ListNode* getMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=NULL && fast ->next != NULL){
            fast =fast ->next ->next;
            slow = slow ->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        // empty node
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;

        while(curr != NULL){
            forward = curr-> next;
            curr-> next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        //empty or 1 node
        if(head == NULL || head -> next == NULL){
            return head;
        }

        //get middle of linked list
        ListNode* middle = getMiddle(head);

        ListNode* temp = middle->next;
        middle -> next = reverse(temp);

        //compare different half
        ListNode* head1= head;
        ListNode* head2 = middle->next;

        while(head2 != NULL){
            if(head1->val != head2 ->val){
                return false;
            }
            head1 = head1 ->next;
            head2= head2 -> next;
        }
        // get back to initial step
        temp = middle -> next;
        middle -> next = reverse(temp);

        return true;
    }
};