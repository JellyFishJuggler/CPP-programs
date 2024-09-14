class Solution {
public:


bool possible(vector<int>& nums,int mid, int m, int k){
        int n = nums.size();
        int count = 0;
        int bq = 0;
        for(int i=0; i<n; i++){
            if(nums[i] <= mid){
                count++;
            }
            else{
                bq += count/k;
                count = 0;
            }

        }
        bq += count/k;

        return bq>=m;
    }

    int minDays(vector<int>& nums, int m, int k) {
        int n = nums.size();
        int l = *min_element(nums.begin(), nums.end());
        int r = *max_element(nums.begin(), nums.end());
        long long val = m * 1ll * k * 1ll;
        if(val > n)   return -1;
        int ans = -1;
        while(l<=r){
            int mid = l + (r-l) / 2;
            if(possible(nums,mid,m,k)){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }


        return ans;
    }
};