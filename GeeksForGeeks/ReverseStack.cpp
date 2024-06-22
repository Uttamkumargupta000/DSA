/* Reverse a Stack using Recursion */

class Solution{
    private:
    void insertAtBottom(stack<int>& St, int element){
        
        //base case
        if(St.empty()){
            St.push(element);
            return ;
        }
        
        int num = St.top();
        St.pop();
        
        //recursive call to put element at bottom
        insertAtBottom(St, element);
        
        St.push(num);
    }
public:
    void Reverse(stack<int> &St){
        
        //base case
        if(St.empty()){
            return ;
        }
        
        int num = St.top();
        St.pop();
        
        //recursive call to reverse stack
        Reverse(St);
        
        insertAtBottom(St, num);
    }
};