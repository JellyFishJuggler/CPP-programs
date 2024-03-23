// Failed at [3,2,3]
// Expected : [0,2]
// Got : [0]

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

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}