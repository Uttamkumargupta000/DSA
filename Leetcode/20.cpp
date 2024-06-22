/* Valid Parentheses  */


class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        
        for(int i=0;i<s.length(); i++){
            char ch = s[i];
            //for opening bracket push
            if( ch == '(' || ch == '{' || ch == '['){
                stack.push(ch);
            }
            else{
                //for closing pop the 
                if(!stack.empty()){
                    char top = stack.top();
                    if((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[')){
                        stack.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }

        //check stack is empty or not 
        if(stack.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};