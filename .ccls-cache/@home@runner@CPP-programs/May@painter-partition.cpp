//Logic is exaclty similar to Book Allocation 
//Hence the code is as well.

bool isPossible(vector<int>& nums, int k, int n, int mid){
  int count = 1;
  int subCount =  0;
  for(int i=0; i<n; i++){
      if(subCount + nums[i] <= mid){
          subCount += nums[i];
      }
      else{
          count++;
          if(count > k || nums[i] > mid){
              return false;
          }
          subCount = nums[i];
      }
  }
  return true;
}

int splitArray(vector<int>& nums, int k) {
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

int findLargestMinDistance(vector<int> &boards, int k)
{
//    Write your code here.
splitArray(boards, k);
}