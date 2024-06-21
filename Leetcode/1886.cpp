/* Determine Whether Matrix Can Be Obtained By Rotation  */

class Solution {
    private:
    void rotate(vector<vector<int>>& mat){

        //initilise the row and column 
        int row = mat.size();
        int col = mat[0].size();

        //taking transpose of matrix
        for(int i=0;i<row;i++){
            for(int j=0;j<i;j++){
                swap(mat[i][j], mat[j][i]);
            }
        }

        //taking reverse of rows
        for(int i=0;i<row;i++){
            reverse(mat[i].begin(), mat[i].end());
        }
    }
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {

        //rotating the matrix as 360/90 = 4
        for(int i=0;i<4;i++){
            if(mat == target){
                return true;
            }
            rotate(mat);
        }
        return false;
    }
};