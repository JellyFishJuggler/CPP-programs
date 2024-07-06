class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 1;
        int r = num;
        while(l<=r){
        //square function use kro BC
            int mid = l + (r-l) / 2;
            if(mid == sqrt(num)){
                return true;
            }
            else if(mid < sqrt(num)){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }

        return false;
    }
};