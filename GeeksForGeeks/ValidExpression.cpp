/* Valid Expression */

bool valid(string s)
{
    // code here
    if(s.length() %2 != 0){
        return false;
    }
    
    stack<char> str;
    
    for(int i=0; i<s.length() ;i++){
        char ch = s[i];
        
        if(ch == '(' || ch == '{' || ch == '['){
            str.push(ch);
        }
        else{
            
            if(!str.empty()){
                char top = str.top();
                
                if((top == '(' && ch == ')' )|| (top == '{' && ch == '}') ||( top == '[' && ch == ']')){
                    str.pop();
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
    if(str.empty() == true){
        return true;
    
        
    }
    return false;
    
}