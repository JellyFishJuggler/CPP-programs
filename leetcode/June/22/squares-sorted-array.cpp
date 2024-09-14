//simple question hai, [-3,4,2,0,10] ke har elements ka square nikalna h aur fir sort kr dena h 
//ulta bhi kroge to idk ki dikt ho gi koi...

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int n = nums.size();
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            ans[i] = nums[i] * nums[i]; 
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};