class Solution {
public:
  int divisor(vector<int> &nums, int n, int div) {
// iss function me basically yehi kiya h ki 'sum' calculate kr liya divisors ka
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += ceil((double)(nums[i]) / (double)(div));
    }
    return sum;
  }

  int smallestDivisor(vector<int> &nums, int threshold) {
    // BRUTE FORCE
    //  TC -> O(n^2)
    //  SC -> O(1)
    //  int maxEl = *max_element(nums.begin(), nums.end());
    //  int n = nums.size();

    // for(int i=1;i<= maxEl;i++){
    //     int sum = 0;
    //     for(int j=0;j<n;j++){
    //         sum += ceil((double)(nums[j]) / (double)(i));

    //     }
    //     if(sum <= threshold){
    //             return sum;
    //         }
    // }
    // return -1;

    // BINARY SEARCH
    int n = nums.size();

    int left = 1;
    int right = *max_element(nums.begin(), nums.end());
    ;
    int ans = -1;
    while (left <= right) {
      int mid = left + (right - left) / 2;
        // yaha mid ka use krke divisor ka 'sum' hm 'result' me store kr rhe hai, jisko fir 'thresold' se compare krenge -> mil gya to return nhi to left right krte rho.....
      int result = divisor(nums, n, mid);
      if (result <= threshold) {
        ans = mid;
        right = mid - 1;
      } else {
        left = mid + 1;
      }
    }
    return ans;
  }
};