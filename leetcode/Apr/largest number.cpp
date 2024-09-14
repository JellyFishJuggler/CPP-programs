bool compareSort(int a, int b) {

  string num1 = to_string(a);
  string num2 = to_string(b);

  return (num1 + num2) > (num2 + num1);
}

class Solution {
public:
  string largestNumber(vector<int> &nums) {

    string ans = "";
    int n = nums.size();
    if (nums[0] == 0) {
      return "0";
    }
    sort(nums.begin(), nums.end(), compareSort);
    for (int i = 0; i < n; i++) {
      ans += to_string(nums[i]);               // same if statement can be used in the for loop with ans[0] == '0'
    }
    return ans;
  }
};

/*
    auto cmp = [&](int a, int b){
      string s1 = to_string(a) + to_string(b);
      string s2 = to_string(b) + to_string(a);
      return s1 > s2;
    }

    yeh basically use krte h agr main function me hee krna ho kaam....w
*/