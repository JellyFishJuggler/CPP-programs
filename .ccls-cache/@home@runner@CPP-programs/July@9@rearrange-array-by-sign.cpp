class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg;
        int n = nums.size();
        for(int i=0; i<n; i++){
            //neg -> -ve && pos -> +ve
            if(nums[i]<0) neg.push_back(nums[i]);
            else    pos.push_back(nums[i]);
        }
        for(int i=0; i<n/2; i++){
            //index check krliya ki negative wale kidrh h ar positive wale kidrh hai
            nums[2*i] = pos[i];
            nums[2*i+1] = neg[i];
        }
        return nums;
    }
};