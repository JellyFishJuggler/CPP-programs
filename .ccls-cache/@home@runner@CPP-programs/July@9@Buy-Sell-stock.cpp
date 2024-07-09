class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int maxValue = 0, value = prices[0];
    int n = prices.size();
    for (int i = 1; i < n; i++) {
      if (prices[i] < value) {
        value = prices[i];
      }

      maxValue = max(maxValue, prices[i] - value);
    }

    return maxValue;
  }
};