// -----------------  APPROACH 1 USING TRAVERSAL AND COMPARING ----------

// TC = O(N)   SC = O(N)

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {

        // making array to store value
        vector<int> cnt1(1001);
        vector<int> cnt2(1001);

        for (int v : target) {
            cnt1[v]++;
        }

        for (int v : arr) {
            cnt2[v]++;
        }
        
        return cnt1 == cnt2;
    }
};


// --------------- APPROACH 2 USING STL AND SORTING -------------

// TC = O(NlogN)

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {

        //sorting both array 
        sort(arr.begin(), arr.end());
        sort(target.begin(), target.end());

        // first case
        if(target.size() != arr.size()){
            return false;
        }

        //checking condition
        for(int i = 0 ; i < target.size(); i++){
            if(target[i] != arr[i]){
                return false;
            }
        }
        return true;
    }
};