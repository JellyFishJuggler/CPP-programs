// Failed at [3,2,3]
// Expected : [0,2]
// Got : [0]

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    for (int i = 1; i < nums.size(); i++)
    {
        if ((nums[i] + nums[i - 1]) == target)
        {
            return {i - 1, i};
        }
    }

    return {-1};
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