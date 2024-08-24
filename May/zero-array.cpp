class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                arr.push_back(nums[i]);
            }
        }
        int nz = arr.size();
        for(int i = 0; i<nz;i++){
            nums[i] = arr[i];
        }
        for(int i =nz; i<n;i++){
            nums[i] = 0;
        }
    }
};