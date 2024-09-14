class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int sum = 0;
    map<long long, int>mpp;
    //int maxlen = 0;
    int count = 0;
    for(int i=0; i<n; i++){
        sum += nums[i];
        if(sum == k){
            //maxlen = max(maxlen, i+1);
            count++;
        }
        int rem = sum - k;
        if(mpp.find(rem) != mpp.end()){
            //int len = i - mpp[rem];
            //maxlen = max(len,maxlen);
            count += mpp[rem];
        }
        // if(mpp.find(sum) == mpp.end()){
        //     mpp[sum] = i;
        // }
        mpp[sum]++;
    }

    return count;
}

};