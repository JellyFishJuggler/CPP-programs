class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        //l -> minEle r -> maxEle lb -> left boundary (value outside of range(l,r))
        int l = -1, r = -1, lb = -1;
        long long ans = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] >= minK && nums[i] <= maxK){
                l = (nums[i] == minK) ? i : l;
                r = (nums[i] == maxK) ? i : r;

                ans += max(0, min(r,l) - lb);
            }
            else{
                lb = i;
                l = -1;
                r = -1;
            }
        }   
        return ans;
    }
};