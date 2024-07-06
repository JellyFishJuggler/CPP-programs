#include <bits/stdc++.h>
using namespace std;

int longest(string s, int n, int k) {
    unordered_map<char, int> mpp;
    int maxlen = 0, l = 0, r = 0;

    while (r < n) {
        mpp[s[r]]++;

        // Adjusting the left pointer to maintain at most k distinct characters
        while (mpp.size() > k) {
            mpp[s[l]]--;
            if (mpp[s[l]] == 0) {
                mpp.erase(s[l]);
            }
            l++;
        }

        // Calculate the length of the current valid substring
        if (mpp.size() <= k) {
            maxlen = max(maxlen, r - l + 1);
        }

        r++;
    }

    return maxlen;
}

int main() {
    string s = "aabbcc";
    int n = s.size();
    int k = 3;

    int result = longest(s, n, k);
    cout << result << endl;

    return 0;
}
