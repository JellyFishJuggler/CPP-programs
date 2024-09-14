class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0;
        int n = arr.size();
        int r = n-1;
        int mid = l + (r-l) / 2;
        while(l <= r){
            //yeh max dekh rha hai
            if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
                return mid;
            }
            //agr hm right side pe hai toh
            else if(arr[mid] > arr[mid+1]){
                r  = mid - 1;
            }
            //agr hm left side me h ai to
            else{
                l = mid + 1;
            }
            mid = l + (r-l) / 2;
        }
        return mid;
    }
};