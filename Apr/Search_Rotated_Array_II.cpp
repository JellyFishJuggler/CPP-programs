// TLE aa rha abhi to
// same tarike se kr rhkha h jaise Part 1 wala kiya tha...

class Solution {
public:
    bool search(vector<int>& nums, int target) {
            int n = nums.size();
            int left = 0;
            int right = n- 1;
            int mid = left + (right - left) / 2;
            while(left <= right){
                    if(nums[mid] == target) {
                    return true;
                }
                if(nums[mid] == nums[left] && nums[mid] == nums[right]){    
                    left = left + 1;
                    right = right - 1;
                    continue;
                }
                if(nums[left] <= nums[mid]){
                    if(nums[left] <= target && nums[mid] >= target){
                     right = mid - 1;
                    }
                    else{
                        left = mid + 1;
                    }
                }
                else{
                    if(nums[right] >= target && nums[mid] <= target){
                        left = mid + 1;
                    }
                    else{
                        right = mid - 1;
                    }
                }


            }
            return false;
    }
};