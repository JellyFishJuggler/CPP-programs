class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0, l = 0, r = 0, minlen = INT_MAX;
        while(r < nums.size()){
            //element ka sum leliya tha 
            sum += nums[r];
            
            while(sum >= target){
                // minm length calculate ki thi
                minlen = min(minlen, r-l+1);
                //agr jda hogye tb decrease krdo
                sum -= nums[l];
                l++;
            }
            r++;
        }
        //agr INT_MAX ke equal h to return -1 else minlen return krdo
        return minlen == INT_MAX ? 0 : minlen;
    }
};