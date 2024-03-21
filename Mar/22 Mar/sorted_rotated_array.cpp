// getting TLE
// code did pass the test cases ab yaad nhi bc ki kya change krdiya jis vjh se nhi chl rha ab 😭

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int key) {
        int pivot = searchPivot(nums);
        if(nums[pivot] <= key && key <= nums[nums.size()-1]){
            return binarySearch(nums,pivot,(nums.size() - 1),key);
        }
        else{
            return binarySearch(nums,0,pivot - 1, key);
        }
    }

    int binarySearch(vector<int>&nums, int s, int e, int key){
        int mid = s + (e-s) / 2;
        while(s<=e){
            if(nums[mid] == key){
                return mid;
            }
            else if(nums[mid] < key){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s) / 2;
        }

        return -1;
    }

    int searchPivot(vector<int>&nums){
        int size = nums.size();
        int left = 0, right = size - 1;
        int mid = left  + (right - left) / 2;
        while(left <= right){
            if(nums[mid] > nums[0]){
                left = mid + 1;
            }
            else{
                right = mid;
            }

            mid = left + (right - left) / 2;
        }

        return left;
    }
};
