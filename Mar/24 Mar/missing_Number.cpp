class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        int og_sum = (n * (n + 1)) / 2;
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        int missingNum = og_sum - sum;

        return missingNum;
    }
};