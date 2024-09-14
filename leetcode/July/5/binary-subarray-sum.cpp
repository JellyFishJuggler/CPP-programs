class Solution {
public:
    int srijan(vector<int>& nums, int goal){
        int sum = 0, l = 0, r = 0, len = 0;
        int n = nums.size();
        while(r < n){
            //next element ka sum lia
            sum += nums[r];
            while(sum > goal){
                //jda hua to left se hata diya
                sum -= nums[l];
                l++;
            }
            len += r - l + 1;
            r++;
        }
        //len bolo count bolo same same but diflent
        return len;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        //agr goal hee naa ho zindagi me tb yeh krna hai.
        if (goal == 0) {
            return srijan(nums, 0);
        }
        //verna yeh krna hai
        //goal = 2 hai to goal - 1 -> 0 ya 1 ho skta h aur inhe subtract kroge to exact 2 ka sum milega hme :)
        return srijan(nums, goal) - srijan(nums, goal - 1);
    }
};
