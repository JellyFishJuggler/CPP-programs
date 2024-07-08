class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
           int sum = 0;
        //sum calculate krliya fir avg find kr liya 
        for(int i=0; i<k; i++) sum += nums[i];
        int maxSum = sum; 
        int l = 0;
        int r = k;
        while(r < nums.size()) { 
            sum = sum - nums[l]; 
            l++;
            sum = sum + nums[r];
            r++;
            maxSum = max(maxSum, sum); 
        }
        return (double)maxSum / k;
    }
};