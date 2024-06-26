/* Largest Rectangle in Histogram */

class Solution {
    private:
    vector<int> nextSmaller(vector<int> arr, int n){

        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i=n-1; i>=0; i--){
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr){
                s.pop();
            }
            //answer is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    vector<int> prevSmaller(vector<int> arr, int n){

        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i=0; i<n ;i++){
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr){
                s.pop();
            }
            //answer is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();
        //getting the previous value in histogram for maximum
        vector<int> next(n);
        next = nextSmaller(heights, n);

        //getting the next value in the histogram
        vector<int> prev(n);
        prev = prevSmaller(heights, n);

        int area = INT_MIN;
        for(int i=0 ;i<n; i++){
             
            int l = heights[i];

            if(next[i] == -1){
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;

            int newArea = l*b;

            area = max(area, newArea);
            
        }
        return area;
    }
};