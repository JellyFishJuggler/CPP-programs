class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
        for(int i=0; i< nums.size(); i++){
            //check if 1
            if(nums[i] == 1){
                count++;
            }//check if 0 -> count ko reset krdo
            else if(nums[i] == 0){
                count = 0;
            }
            //max calculate krlo
            if(count > maxCount){
                maxCount = max(maxCount,count);
            }
        }
        return maxCount;
    }
};