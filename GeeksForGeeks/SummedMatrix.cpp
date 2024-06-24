/* Summed Matrix*/

class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here
        
        //not in range of  matrix provided
        if(q<2 || q>2*n){
            return 0;
        }
        //if q is less than n
        else if(q<=n+1){
            return q-1;
        }
        // q is greater than n
        else{
            return (2*n) - q+1;
        }
    }
};