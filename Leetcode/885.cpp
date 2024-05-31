/*     Spiral Matrix -3   */

class Solution {
    bool isPossible(int rows, int cols, int rStart, int cStart){
        if(rows<0 || cols<0 || rows>=rStart || cols>=cStart){
            return false;
        }
        return true;
    }
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {

        vector<vector<int>> ans;
        ans.push_back({rStart,cStart});
        int total = rows*cols;
        int size=1;

        while(ans.size() < total){

            for(int i=1;i<=size;i++){
                if(isPossible(rStart,cStart+i,rows,cols))
                    ans.push_back({rStart,cStart+i});
            }
            cStart+=size;

            for(int i=1;i<=size; i++){
                if(isPossible(rStart+i,cStart,rows,cols))
                    ans.push_back({rStart+i,cStart});
            }
            rStart+=size;
            size++;

            for(int i=1;i<=size;i++){
                if(isPossible(rStart,cStart-i,rows,cols))
                    ans.push_back({rStart,cStart-i});
            }
            cStart-=size;

            for(int i=1; i<=size ;i++){
                if(isPossible(rStart-i,cStart,rows,cols))
                    ans.push_back({rStart-i,cStart});
            }
            rStart-=size;
            size++;
        }
        return ans;
    }
};