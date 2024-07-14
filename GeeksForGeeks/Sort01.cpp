//------ Approach 1 using STL ----------

// TC = O(nlogn);

sort(arr.begin(), arr.end());


//-------- APPROACH 2 USING COUNT THE 0 AND 1 --------

// TC = 0(N);

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
       
        int zero = 0;
        int one = 0;
        
        for(int i = 0 ; i < arr.size(); i++){
            if(arr[i] == 0){
                zero++;
            }
            else if(arr[i] == 1){
                one++;
            }
        }
        for(int i = 0 ; i < arr.size(); i++){
            if(i < zero ){
                arr[i] = 0;
                
            }
            else if( i < (zero + one) ){
                arr[i] = 1;
            }
        }
    }
};

// ---------   APPROACH 3 USING TWO POINTER APPORACH ----------

// TC = O(N/2);

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int s = 0;
        int e = arr.size() - 1;
        
        while(s < e){
            if(arr[s] == 0 && arr[e] == 1){
                s++;
                e--;
            }
            if(arr[s] != 0 && arr[e] != 1){
                swap(arr[s], arr[e]);
            }
        }
    }
};