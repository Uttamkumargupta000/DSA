// ------------------ APPROACH 1 USING KANDE'S ALGORITHM --------------------

// TC = O(N)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum = 0;
        int maxi = nums[0];

        for(int i = 0; i < nums.size(); i++){
            sum = sum + nums[i];

            maxi = max(sum, maxi);

            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
    }
};