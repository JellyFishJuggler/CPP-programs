class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int j = i + 1;
            int k = n - 1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0) j++;
                else if(sum > 0) k--;
                else{
                    vector<int>temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]) j++;
                    while(j<k && nums[k] == nums[k+1])  k--;
                }
            }
        }
        //vector<vector<int>>ans(st.begin(),st.end());

        return ans;
    }
};

/*      BRUTE FORCE : TC O(n3 * log(no. of uniques))
  class Solution {
  public:
      vector<vector<int>> threeSum(vector<int>& nums) {
          //vector<vector<int>>ans;
          set<vector<int>>st;
          vector<int>temp;
          int n = nums.size();
          for(int i=0; i<n; i++){
              for(int j=i+1; j<n; j++){
                  for(int k=j+1; k<n; k++){
                      if(nums[i] + nums[j] + nums[k] == 0){
                          temp = {nums[i],nums[j],nums[k]};
                          sort(temp.begin(),temp.end());
                          st.insert(temp);
                      }
                  }
              }

          }
          vector<vector<int>>ans(st.begin(),st.end());

          return ans;
      }
  };
*/

/*      BETTER SOLUTION : T(n2 * log(n)) : log(n) can be treated as constant if unordered_set was used.
  class Solution {
  public:
      vector<vector<int>> threeSum(vector<int>& nums) {
          //vector<vector<int>>ans;
          set<vector<int>>st;
          vector<int>temp;
          int n = nums.size();
          for(int i=0; i<n; i++){
              set<int>hash;
              for(int j=i+1; j<n; j++){
                  int k = - ( nums[i] + nums[j]);
                  if(hash.find(k) != hash.end()){
                      temp = {nums[i],nums[j],k};
                      sort(temp.begin(),temp.end());
                      st.insert(temp);
                  }
                  hash.insert(nums[j]);
              }

          }
          vector<vector<int>>ans(st.begin(),st.end());

          return ans;
      }
  };
*/