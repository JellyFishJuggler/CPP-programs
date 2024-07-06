#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    map<int, int> mp;
    for(int i=0;i<nums.size();i++){
        int a = nums[i];
        int more = target - a;
        if(mp.find(more) != mp.end()){
            return {mp[more],i};
        }

        mp[a] = i;
    }
    return {-1,-1};
}
int main()
{

    vector<int> nums = {3,2.3};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}


/*
BRUTE FORCE APPROACH : 
    class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int>ans;
            for(int i=0; i < nums.size(); i++){
                for(int j=i+1; j < nums.size(); j++){
                    if(nums[i] + nums[j] == target){
                        ans.push_back(i);
                        ans.push_back(j);
                    }
                }
            }

            return ans;
        }
    };
*/