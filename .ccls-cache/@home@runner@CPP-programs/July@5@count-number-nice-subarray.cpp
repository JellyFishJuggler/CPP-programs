class Solution {
public:

    int srijan(vector<int>& nums, int k){
        int l = 0, r = 0, maxlen = 0, len = 0;
        int n = nums.size();
        int count = 0;
        while(r<n){
            //odd element check
            if(nums[r] % 2 != 0){
                k--;
                count = 0;
            }
            
            while(k < 0){
                if (nums[l] % 2 != 0){
                    k++;
                }
                count++;

                l++;
            }
            len = r - l + 1;
            maxlen += len;
            //maxlen = max(len,maxlen);
            r++;
        }

        return maxlen;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return srijan(nums,k) - srijan(nums, k-1);
    }
};