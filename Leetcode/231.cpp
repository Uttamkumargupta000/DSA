/*Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.     */
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<=30;i++){
            if(n==pow(2,i)){
                return true;
            }
        }
        return false;
    }
};