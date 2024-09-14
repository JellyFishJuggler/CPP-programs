class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int l = 0, r = n;
        int ans = -1;
        while(l<=r){
            int mid = l + (r - l) / 2;
            //either stle function use krlo ya lowerbound ka bana lo -> condition v[mid] <= x
            // iss formule se -> calcu elements >= mid
            int count = n - (lower_bound(nums.begin(),nums.end(),mid) - nums.begin());
            
            if(count == mid){
                //l = mid + 1;
                return mid;
            }
            else if(count < mid)    r = mid - 1;
            else    l = mid + 1;
        }
        return -1;
    }
};