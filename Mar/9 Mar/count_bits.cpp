#include <bits/stdc++.h>
using namespace std;

vector<int> countBits(int n) {
    vector<int> ans(n + 1);
    for (int i = 0; i <= n; i++) {
        int count = 0;
        int num = i;
        while (num) {
            if (num & 1) {
                count++;
            }
            num = num >> 1;
        }
        ans[i] = count;
    }
    return ans;
}

int main() {
    int n = 5;
    vector<int> ans = countBits(n);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}


// Time Complexity: O(n * sizeof(int))
// Space Complexity: O(n)