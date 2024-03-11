class Solution {
    public:
    bool isPowerOfFour(long long int n){
        if(n == 0 || n == 2){
            return false;
        }
        n = n >> 2;
        if((n ^ (n-1)) == 0){
            return true;
        }
        else{
            return false;
        }
    }
};