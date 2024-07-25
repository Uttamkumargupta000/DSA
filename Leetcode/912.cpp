// ------------- APPROACH 1- USING STL OPERATIONS ----------

// TC = O(NlogN)

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums;
    }
};


// ------------ APPROACH 2 - USING MERGE SORT ---------

//  TC = O(NlogN)

class Solution {
    private:
    void merge(vector<int>& nums, int s, int e){
        int mid = s + (e -s)/2;

        int len1 = mid - s + 1;
        int len2 = e - mid;

        int *first = new int[len1];
        int *second = new int[len2];

        //putting all these value in these dynamic array 
        int arrayIndex = s;
        for(int i = 0; i < len1; i++){
            first[i] = nums[arrayIndex++];
        }
        
        arrayIndex = mid+1;
        for(int i = 0; i < len2; i++){
            second[i] = nums[arrayIndex++];
        }

        //merge two sorted array 

        int i = 0, j = 0, k = s;

        while( i < len1 && j < len2){
            if(first[i] < second[j]){
                nums[k] = first[i];
                k++;
                i++;
            }
            else{
                nums[k] = second[j];
                k++;
                j++;
            }
        }
        while(i < len1){
            nums[k] = first[i];
            k++;
            i++;
        }
        while(j < len2){
            nums[k] = second[j];
            k++;
            j++;
        }
    }
    void mergeSort(vector<int>& nums, int s, int e){
        
        //base case
        if(s>= e){
            return;
        }

        int mid = s + (e - s)/2;

        //left part
        mergeSort(nums,s,mid);

        //right part sort
        mergeSort(nums,mid+1,e);

        //merge two sorted array
        merge(nums, s, e);
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};