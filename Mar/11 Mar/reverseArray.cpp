#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 5;
  int arr[100] = {1, 2, 3, 4, 5};
  int start = 0, end = n - 1;

  while (start <= end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}