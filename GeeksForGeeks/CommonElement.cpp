//---------------   APPROACH 1   ----------------

//  TC = O(N*LOG*N)


class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        // sort the both array
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        vector<int> ans;

        //taking two pointer for traversal of list 
        int i = 0;
        int j = 0;
        
        while(i < v1.size() && j < v2.size()){
            if(v1[i] == v2[j]){
                ans.push_back(v1[i]);
                i++;
                j++;
            }
            else if(v1[i] < v2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};