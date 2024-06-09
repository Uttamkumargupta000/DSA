/*  permutations  */

/* Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.*/


class Solution {
    private:
    void solve(vector<int> nums, int index, vector<vector<int>>& ans){
        //base case
        if(index >= nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int j=index;j<nums.size();j++){
            swap(nums[index], nums[j]);
            //recursive call
            solve(nums, index+1, ans);
            //backtracking
            swap(nums[index], nums[j]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        //function calling
        solve(nums,index,ans);
        return ans;
    }
};