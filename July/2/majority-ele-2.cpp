class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //frequency store krne ke liye banaya hai
        unordered_map<int,int>mpp;
        vector<int>majo;

        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        int n = nums.size() / 3;
        for(auto i:mpp){
            //yadi mpp ke andr milta h to usko return krdo (multiple bari)
            if(i.second > n){
                majo.push_back(i.first);
            }
        }

        return majo;
    }
};