class Solution {
public:

    void cycleSort(vector<int>& nums, int n) {
        int i = 0;
        while (i < n) {
            int correctIndex = nums[i] - 1;
            if (correctIndex >= 0 && correctIndex < n && nums[i] != nums[correctIndex]) {
                swap(nums[i], nums[correctIndex]);
            }
            else {
                i++;
            }
        }
    }

    vector<int> findErrorNums(vector<int>& nums) {
         int n = nums.size();
        cycleSort(nums, n);

        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return {nums[i],i+1};
            }
        }

        return {-1,-1};
    }
};