/*
  Algo :
      1) first check whether [mid] == target
      2) Check if [left] <= [mid] : This ensures that left side is sorted 
        2.1) check if target lie in range(left,mid) => for left side sorted
  array 2.2) shift the right 2.3) else shift the left 3) Check if [right] >
  [mid] 3.1) Do same for checking if target lie in right side of sorted array
        3.2) Shift the left
        3.3) else shift the right

*/

// The difference in this and lowest code is quite disturbing.
// thats the calculation of mid.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int search(vector<int> &arr, int k) {

    int n = arr.size();
    int low = 0, high = n - 1;
    while (low <= high) {
      int mid = (low + high) / 2;

      if (arr[mid] == k)
        return mid;

      if (arr[low] <= arr[mid]) {
        if (arr[low] <= k && k <= arr[mid]) {

          high = mid - 1;
        } else {

          low = mid + 1;
        }
      } else {
        if (arr[mid] <= k && k <= arr[high]) {

          low = mid + 1;
        } else {

          high = mid - 1;
        }
      }
    }
    return -1;
};


// brute force method - linear search

// for(int i=0;i<n;i++){
//     if(nums[i] == target){
//         return i;
//     }
// }

// return -1;

// binary search method
//  int left = 0;
//  int right = n -1;
//  int mid = left + (right - left) / 2;
//  while(left <= right){
//      if(nums[mid] == key)    {return mid;}
//      if(nums[left] <= nums[mid]){
//          if(nums[left] <= key && nums[mid] >= key){
//              right = mid - 1;
//          }
//          else{
//              left = mid + 1;
//          }
//      }
//      else{
//          if(nums[right] >= key && nums[mid] <= key){
//              left = mid + 1;
//          }
//          else{
//              right = mid - 1;
//          }
//      }

// }