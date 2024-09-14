class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            ans = ans ^ nums[i];
        }

        return ans;
    }
};

//Brute Force
/*
  running a loop : i = 0 to n
  for each element arr[i] we use linear search then counts its occurence
  if count = 1 then return the number
*/