//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums)
    {
        vector<int> ans;
        int XOR = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            XOR ^= nums[i];
        }
        int right_bit = XOR & -XOR;

        int x = 0, y = 0;
        for (int num : nums)
        {
            if (num & right_bit)
            {
                x ^= num;
            }
            else
            {
                y ^= num;
            }
        }

        ans.push_back(min(x, y));
        ans.push_back(max(x, y));

        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(2 * n + 2);
        for (int i = 0; i < 2 * n + 2; i++)
            cin >> v[i];
        Solution ob;
        vector<int> ans = ob.singleNumber(v);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends

/*
    if (x > y){

            vector<int> ans{y , x};
             return ans;
        }else{

            vector <int> ans {x ,y};
             return ans;
        }
*/
