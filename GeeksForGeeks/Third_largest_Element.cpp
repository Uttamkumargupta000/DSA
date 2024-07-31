// -------------- APPROACH 1 USING SORITNG -----------

// TC = O(Nlog(N))

class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        
        sort(arr.begin(), arr.end());
        
        if(arr.size() < 3){
            return -1;
        }
        
        else{
            return arr[arr.size() - 3];
        }
    }
};


// ----------- APPROACH 2 USING SIMPLE APPROACH ------------

//  TC = O(N)

class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        
        if(arr.size() < 3){
            return -1;
        }
        
        int first, second, third;
        
        third = second = first = INT_MIN;
        
        for(int i = 0; i < arr.size(); i++){
            
            if(arr[i] > first){
                third = second;
                second = first;
                first = arr[i];
            }
            
            else if(arr[i] > second ){
                third = second;
                second = arr[i];
            }
            
            else if(arr[i] > third ){
                third = arr[i];
            }
            
        }
        
        return third;
    }
};