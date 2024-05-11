#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& arr, int x)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
      int mid = low + (high - low) / 2;

      if (arr[mid] >= x) {
        ans = mid;

        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    return ans;
  }

int main() {
    vector<int> arr = {1, 3, 5, 6};
    int x = 5;
    int result = searchInsert(arr, x);
    cout << "Position: " << result << endl;
    return 0;
}