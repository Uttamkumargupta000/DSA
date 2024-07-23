// --------------- APPROACH 1 USING MAP AND LAMBDA FUNCTION -----------

// TC = O(NlogN)


class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int, int> mapping;

        for(int i = 0 ; i < nums.size(); i++){
            mapping[nums[i]]++;
        }

        sort(nums.begin(), nums.end(), [&mapping](int a, int b){
            if(mapping[a] == mapping[b]){
                return a > b;
            }
            return mapping[a] < mapping[b];
        });
        return nums;
    }
};