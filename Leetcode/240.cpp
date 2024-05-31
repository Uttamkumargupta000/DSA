/*  Search in a 2d matrix   */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s=0;
        int row=matrix.size();
        int col=matrix[0].size();
        int rowIndex=0;
        int colIndex=col-1;
        
        while(rowIndex<row && colIndex>=0){
            int element=matrix[rowIndex][colIndex];
            if(element == target){
                return true;
            }
            if(element< target){
                rowIndex++;
            }
            else{
                colIndex--;
            }
        }
        return false;
    }
};