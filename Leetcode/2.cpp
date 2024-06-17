/* add 2 number n linked list*/

class Solution {
private:
    void insertAtTail(ListNode*& head, ListNode*& tail, int val) {
        ListNode* temp = new ListNode(val);
        // If the list is empty
        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    ListNode* add(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head = NULL;
        ListNode* tail = NULL;

        while (l1 != NULL || l2 != NULL || carry != 0) {
            int sum = carry;
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }

            int digit = sum % 10;
            insertAtTail(head, tail, digit);
            carry = sum / 10;
        }
        return head;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return add(l1, l2);
    }
};