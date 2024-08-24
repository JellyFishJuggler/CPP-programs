class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int l = 0, r = 0, sum = 0, minlen = INT_MAX, neg = 0;
        while(r < nums.size()){
            if(sum + nums[r] > 0){
                //neg element check
                if(nums[r] < 0)neg -= nums[r];
                sum += nums[r];
            }
            else{
                //agr sum < 0 ho jaye to reset krdo :)
                neg = 0;
                sum = 0;
                l = r + 1;
            }
            if(sum >= k){
                int tmp = sum, i = l;
                while(i <= r){
                    if(tmp >= k){
                        minlen = min(minlen, r - i + 1);
                        sum = tmp;
                        l = i;
                    }else{
                        if(tmp + neg < k)break;
                    }
                    tmp -= nums[i++];
                }
            }
            r++;
        }
        return (minlen == INT_MAX)? -1 : minlen;
    }
};
