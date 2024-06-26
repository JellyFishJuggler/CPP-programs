class Solution {
public:
    bool search(vector<int>& nums, int target) {
            int n = nums.size();
        int start = 0;
        int end = n-1;

        while(start <= end) {

            int mid = start + (end - start) / 2;

            if(nums[mid] == target || nums[start] == target || nums[end] == target) return true;

            if(nums[start] == nums[end]) {

                ++start;
                --end;

            }
            else if(nums[mid] >= nums[start]) {

                if(target < nums[mid] && target >= nums[start]) {

                    end = mid - 1;

                }
                else {

                    start = mid + 1;

                }

            }
            else {

                if(target > nums[mid] && target <= nums[end]) {

                    start = mid + 1;

                }
                else {

                    end = mid - 1;

                }

            }


        } return false;

    }
};