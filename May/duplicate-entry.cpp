class Solution {
public:
    // int cycleSort(vector<int>& nums, int n){

    // }
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while (i < n) {
            int correctIndex = nums[i] - 1;
           if(nums[i] != i +1){
             if (correctIndex >= 0 && correctIndex < n && nums[i] != nums[correctIndex]) {
                swap(nums[i], nums[correctIndex]);
            }
            else {
                return nums[i];
            }
           }
           else{
            i++;
           }
        }
        return -1;
    }
};    