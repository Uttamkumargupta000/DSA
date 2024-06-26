/* Maximum Rectangle in Histogram */

class Solution{
private:
    vector<long long> nextSmaller(const vector<long long>& arr, int n){
        
        stack<long long > s;
        s.push(-1);
        vector<long long> ans(n);
        
        for(int i=n-1 ;i>=0 ;i--){
            int curr = arr[i];
             
             while(s.top() != -1 && arr[s.top()] >= curr ){
                 s.pop();
             }
             
             ans[i] = s.top();
             s.push(i);
        }
        return ans;
    }
    vector<long long> prevSmaller(const vector<long long>& arr, int n){
        
        stack<long long > s;
        s.push(-1);
        vector<long long> ans(n);
        
        for(int i=0 ;i<n ;i++){
            int curr = arr[i];
             
             while(s.top() != -1 && arr[s.top()] >= curr ){
                 s.pop();
             }
             
             ans[i] = s.top();
             s.push(i);
        }
        return ans;
    }
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        vector<long long> next(n);
        next = nextSmaller(vector<long long>(arr,arr+n), n);
         
         vector<long long> prev(n);
         prev = prevSmaller(vector<long long>(arr,arr+n), n);
         
         long long area = INT_MIN;
         
         for(int i=0 ;i< n ;i++){
             
             long long l = arr[i];
             
             if(next[i] == -1){
                 next[i] = n;
             }
             long long b = next[i] - prev[i] - 1;
             
             long long newArea = l*b;
             
             area = max(area, newArea);
         }
         return area;
        
    }
};