/* Smallest number on the left */

class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
       
       vector<int> ans(n);
       stack<int> s;
       s.push(-1);
       
       for(int i=0; i<n; i++){
           int curr = a[i];
           
           while(s.top() >= curr){
               s.pop();
           }
           
           ans[i] = s.top();
           s.push(curr);
       }
       return ans;
    }
};