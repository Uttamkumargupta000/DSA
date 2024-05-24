/* Write a function that takes the binary representation of a positive integer and returns the number of
set bits
it has (also known as the Hamming weight).
*/

class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};