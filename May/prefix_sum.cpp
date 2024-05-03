#include<bits/stdc++.h>
using namespace std;

int main(){
  int n = 4;
  int a[n] = {1,2,3,4,};

  int pre[n+1];
  pre[0] = 0;
  for(int i=1;i<=n;i++){
    pre[i] = pre[i-1] + a[i-1]; // indexing start 1 se liye ki h taki 0 + (next element ho ske)
  }
  for(int j=0;j<5;j++){
    cout << pre[j] << endl;
  }
  return 0;
}