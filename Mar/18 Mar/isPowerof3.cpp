#include<bits/stdc++.h>
using namespace std;
bool isPowerof3(int n){
  if(n <= 0){
    return false;
  }
  if(n>0 && (int)pow(3, 19) % 3 == 0){
    return true;
  }

  return false;
}
int main(){
  int n;
  cin >> n;
  isPowerof3(n);
  return 0;
}