/* Coverage of all zeros in a binary matrix */

class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;
        
        for(int i=0;i<row; i++){
            for(int j=0; j< col ; j++){
                if(matrix[i][j] == 0){
                    if(i-1>= 0 && matrix[i-1][j] == 1){
                        count++;
                    }
                    if(i+1 < row && matrix[i+1][j] == 1){
                        count++;
                    }
                    if(j-1>= 0 && matrix[i][j-1] == 1){
                        count++;
                    }
                    if(j+1 < col && matrix[i][j+1] == 1){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};