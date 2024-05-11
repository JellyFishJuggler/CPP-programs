#include <bits/stdc++.h>
using namespace std;
int majorityArray(int nums, int n) {
  int count = 0, el;
  for (int i = 0; i < n; i++) {
    if (count == 0) {
      count = 1;
      el = nums[i];
    } else if (nums[i] == el) {
      count++;
    } else {
      count--;
    }
  }
  int count_1 = 0;
  for (int i = 0; i < n; i++) {
    if (nums[i] == el) {
      count_1++;
    }
  }
  if (count_1 > n / 2) {
    return el;
  }
}

int main() {
  int nums[7] = [ 2, 2, 1, 1, 1, 2, 2 ];
  int size = 7;
  majorityArray(nums, size);
  return 0;
}