/* Expression contains redundant bracket or not */

class Solution{
  public:
    int checkRedundancy(string s) {
        
        stack<char> stack;
        
        for(int i=0;i<s.length(); i++){
            char ch = s[i];
            
            //either opening bracker or operator then push 
            if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
                stack.push(ch);
            }
            else{
                
                //for closing bracket 
                if(ch == ')'){
                    bool isRedundant = true;
                    
                    //checking the top element for the opertor for validity 
                    while(stack.top() != '('){
                        char top = stack.top();
                        
                        if(top == '+' || top == '-' || top =='*' || top == '/'){
                            isRedundant = false;
                        }
                        stack.pop();
                    }
                    
                    if(isRedundant == true){
                        return true;
                    }
                    stack.pop();
                }
            }
        }
        return false;
    }
};