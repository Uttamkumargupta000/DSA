/* Print Bracket NUmber*/

class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        
        stack<int> s;
        vector<int> ans;
        int count = 0;
        
        for(int i=0;i<str.length(); i++){
            
            //opening bracket ans store count number in stack
            if(str[i] == '('){
                
                count++;
                ans.push_back(count);
                s.push(count);
            }
            else if(str[i] == ')'){
                
                //closing bracket 
                ans.push_back(s.top());
                s.pop();
            }
        }
        return ans;
    }
};