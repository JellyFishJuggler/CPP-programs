class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos = 0, neg = 1;
        int n = nums.size();
        vector<int>ans(n);

        for(int i=0; i<n; i++){
            if(nums[i] < 0){
                ans[neg] = nums[i];
                neg += 2;
            }
            else{
                ans[pos] = nums[i];
                pos += 2;
            }
        }
        return ans;
        
        
        
        // vector<int>pos,neg;
        // int n = nums.size();
        // for(int i=0; i<n; i++){
        //     //neg -> -ve && pos -> +ve
        //     if(nums[i]<0) neg.push_back(nums[i]);
        //     else    pos.push_back(nums[i]);
        // }
        // for(int i=0; i<n/2; i++){
        //     //index check krliya ki negative wale kidrh h ar positive wale kidrh hai
        //     nums[2*i] = pos[i];
        //     nums[2*i+1] = neg[i];
        // }
        // return nums;
    }
};