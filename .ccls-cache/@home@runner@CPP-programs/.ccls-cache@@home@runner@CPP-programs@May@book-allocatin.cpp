bool isPossible(vector<int>& nums, int k, int n, int mid){
    int students = 1;
    int pagesCount =  0;
    for(int i=0; i<n; i++){
        if(pagesCount + nums[i] <= mid){
            pagesCount += nums[i];
        }
        else{
            students++;
            if(students > k || nums[i] > mid){
                return false;
            }
            pagesCount = nums[i];
        }
    }
    return true;
}

int BookAllocation(vector<int>& nums, int k) {
    int left = 1;
    int n = nums.size();
    int sum  = 0;
    for(int i=0; i<n; i++){
        sum += nums[i];
    }
    int right = sum;
    int ans = 0;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(isPossible(nums,k,n,mid)){
            ans = mid;
            right  = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }

    return ans;
}
