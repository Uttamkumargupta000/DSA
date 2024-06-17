/* Merges sort in linked list with space complexity constant */

class Solution {
private:
    ListNode* getMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right) {

        //if left part is empty 
        if (left == NULL) 
            return right;

        //if right part is empty 
        if (right == NULL) 
            return left;

        ListNode* ans = new ListNode(-1);  // dummy node
        ListNode* temp = ans;

        while (left != NULL && right != NULL) {
            if (left->val < right->val) {
                temp->next = left;
                left = left->next;
            } else {
                temp->next = right;
                right = right->next;
            }
            temp = temp->next;
        }

        // if any nodes left in either list, append them
        if (left != NULL) 
            temp->next = left;
        if (right != NULL) 
            temp->next = right;

        ListNode* result = ans->next;
        delete ans;  // free the dummy node
        return result;
    }

public:
    ListNode* sortList(ListNode* head) {
        // base case
        if (head == NULL || head->next == NULL) {
            return head;
        }

        // get the middle of the list
        ListNode* mid = getMiddle(head);

        // split into two lists
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;

        // recursively sort each half
        left = sortList(left);
        right = sortList(right);

        // merge sorted halves
        ListNode* result = merge(left, right);

        return result;
    }
};