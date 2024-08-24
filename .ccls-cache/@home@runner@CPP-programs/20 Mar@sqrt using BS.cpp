class Solution {
public:
    int mySqrt(int x) {
        int left = 1;

        int right = x;
        int mid,ans;
        if(x == 0){ ans = 0;}
        while(left <= right){

            mid = left + (right - left) / 2;
            if(mid <= x / mid){
                left = mid + 1;
                ans = mid;
            }   
            else{
                right = mid - 1;
            }
        }

        return ans;
    }


};