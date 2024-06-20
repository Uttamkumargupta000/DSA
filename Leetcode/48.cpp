/* Rotate matrix by 90 degree*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        //intitilise row and column
        int row = matrix.size();
        int col = matrix[0].size();

        //reverse the matrix upto lower part triangle
        for(int i=0; i<row ;i++){
            for(int j=0;j<i; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        //reverse the matrix

        for(int i=0; i<row;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};