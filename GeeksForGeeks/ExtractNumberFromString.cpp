/* Extract the Number from the String */


class Solution {
  public:
    long long ExtractNumber(string sentence) {

        // code here
        long long ans = -1;
        for(int i=0 ;i<sentence.length(); i++){
            
            if(sentence[i] >= '0' && sentence[i] <='9'){
                
                long long temp =0;
                bool allchar = true;
                
                while(sentence[i] >= '0' && sentence[i] <= '9'){
                    
                    if(sentence[i] == '9'){
                        allchar = false;
                    }
                    
                    temp = temp * 10;
                    temp = temp + (sentence[i]-'0');
                    i++;
                    
                }
                
                if(allchar){
                     ans = max(ans, temp);
                }
            }
        }
            
        return ans;
        
    }
};