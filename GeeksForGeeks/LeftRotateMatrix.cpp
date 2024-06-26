/* Left Rotate Matrix K times */

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        //intilise the row and column size
        int row = mat.size();
        int col = mat[0].size();
        
        vector<vector<int>> ans(row,vector<int>(col));
        
        k = k % col;
        
        for(int i=0;i<row; i++){
            for(int j=0;j<col; j++){
                ans[i][j] = mat[i][(j+k)%col];
            }
        }
        return ans;
    }
};