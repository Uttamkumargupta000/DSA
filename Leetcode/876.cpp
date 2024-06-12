/* Middle of the linked list */

class Solution {
    private:
    int getLength(ListNode* head){
        int len=0;
        while(head != NULL){
            len++;
            head = head -> next;
        }
        return len;
    }
public:
    ListNode* middleNode(ListNode* head) {
        int ans = getLength(head)/2;
        int count = 0;
        ListNode* temp = head;
        while(count < ans){
            count++;
            temp = temp ->next;
        }
        return temp;
    }
};