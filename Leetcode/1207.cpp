/* Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.*/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> occurrences;
        int n = arr.size();
        
        for (int i = 0; i < n; ) {
            int count = 1;
            while (i + 1 < n && arr[i] == arr[i + 1]) {
                count++;
                i++;
            }
            occurrences.push_back(count);
            i++;
        }
        
        std::sort(occurrences.begin(), occurrences.end());
        for (int j = 1; j < occurrences.size(); j++) {
            if (occurrences[j] == occurrences[j - 1]) {
                return false;
            }
        }
        
        return true;
    }
};