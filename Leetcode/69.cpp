/*square of number*/

class Solution {
    long long int Binary(int n){
        int s=0,e=n;
        long long int mid=s+(e-s)/2;
        long long int ans=-1;
        while(s<=e){
            if(mid*mid == n){
                return mid;
            }
            if(mid* mid < n){
                ans =mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid =s+(e-s)/2;
        }
        return ans;
    }
public:
    int mySqrt(int x) {
        return Binary(x);
    }
};