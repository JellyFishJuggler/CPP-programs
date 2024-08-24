#include<bits/stdc++.h>
using namespace std;
int binearySearch(int arr[],int left, int right, int target, int size){
  int mid = (left - right)/2  - left;
  while(left <= right){
    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return -1;
}
int main(){
  int arr[5] = {3,5,9,13,27};
  int n = 5;
  int left = arr[0], right = arr[4];
  int key = 13;
  int index = binearySearch(arr,left,right,key,n);
  cout << index;
  return 0;
}