class Solution {
public:
    bool isPowerOfFour(long long int n) {
        if (n == 0 || n == 2) {return false;}
        if (n == 1) {return true;}
       
        n = n >> 2;
        if (((n ^ (n - 1)) & 1) == 1) {
            return true;
        } else {
            return false;
        }
    }
};