class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)   return false;
        long long result = 0;
        int y = x;
        int sum = 0;
        while(x>0){
            result = result * 10 + x % 10;
            //sum = sum * 10 + result;
            x = x / 10;
        }
        if(result == y)    return true;

        return false;
    }
};