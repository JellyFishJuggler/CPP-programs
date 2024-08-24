class Solution {
public:
  bool canWePlace(vector<int> &stalls, int dist, int cows) {
    int n = stalls.size();
    int cntCows = 1;
    int last = stalls[0];
    for (int i = 1; i < n; i++) {
      if (stalls[i] - last >= dist) {    // i'th aur first cow ke beech ki distance find kr rhe h
        cntCows++;
        last = stalls[i];    //yaha update kr rhe h tki next cow ko place kr ske.
      }
      if (cntCows >= cows)
        return true;
    }
    return false;
  }

  int solve(int n, int k, vector<int> &stalls) {

    //         // Write your code here
    //         sort(stalls.begin(), stalls.end());

    //         int limit = stalls[n - 1] - stalls[0];
    //         for (int i = 1; i <= limit; i++) {
    //             if (canWePlace(stalls, i, k) == false) {
    //                 return (i - 1);
    //             }
    //         }
    //         return limit;
    //     }

    // TLE aayega issme

    // Using binary Search

    int start = 0;
    int ans = 0;
    int end = stalls[n - 1] - stalls[0];
    while (start <= end) {
      int mid = start + (end - start) / 2;
      if (canWePlace(stalls, mid, k) == true) {
        ans = mid;
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    }
    return ans;
  }
};