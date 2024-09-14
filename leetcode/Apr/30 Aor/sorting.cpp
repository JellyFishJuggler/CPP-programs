#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {

  if (a.second == b.second) {
    if(a.first > b.first){
      return true;
    }
    return false;
  }1

  if (a.second < b.second) {
    return true;
  }

  return false;
}

int main() {
  int n;
  vector<pair<int, int>> ans;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    ans.push_back({a, b});
  }

  sort(ans.begin(), ans.end(), compare);

  return 0;
}


//sorting in decreasing order....