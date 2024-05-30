/*  spiral matrix -2  */

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int> (n,0));
        //intitlisation of indices
        int startRow=0;
        int startCol=0;
        int endRow=n-1;
        int endCol=n-1;
        int num=1;

        while(startRow <= endRow && startCol <= endCol){

            for(int i=startCol; i<=endCol; i++){
                matrix[startRow][i]=num++;
            }
            startRow++;

            for(int i=startRow; i<=endRow; i++){
                matrix[i][endCol]=num++;
            }
            endCol--;

            if(startRow<=endRow){
                for(int i=endCol; i>=startCol; i--){
                    matrix[endRow][i]=num++;
                }
                endRow--;
            }

            if(startCol <=endRow){
                for(int i=endRow; i>=startRow; i--){
                    matrix[i][startCol]=num++;
                }
                startCol++;
            }
        }
        return matrix;

    }
};