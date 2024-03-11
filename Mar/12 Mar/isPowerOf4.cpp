class Solution {
public:
    bool isPowerOfFour(long long int n) {
        if (n == 0 || n == 2) {return false;}
        if (n == 1) {return true;}
       
        if(n & (n-1) == 0){
            if(( n & 1431655765) > 0){
                return true;
            }
        }

        return false;
    }
};