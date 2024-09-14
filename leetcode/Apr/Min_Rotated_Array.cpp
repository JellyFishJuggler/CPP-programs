class Solution {
public:
    int findMin(vector<int>& arr) {
        int ans = INT_MAX;
      int n = arr.size();
      int left = 0;
      int right = n - 1;
      while(left<=right){
        int mid = left + (right - left) / 2;
        //yeh bas optimization ke liye h -> seedha check kr rhe ki array sorted h kya?
        if(arr[left] <= arr[right]){
          ans = min(ans, arr[left]);  //kash yeh min() function pta hota phle T^T
          break;
        }
        //yaha dhund rhe h ki kaunsi side hamri sorted h 
        //yeh left ko check krne ke liye h agr nhi hui to 'right' wali hui
        if(arr[left] <= arr[mid]){
          //agr yeh sorted hoti to iska arr[left] wala element hmesha chota hota isliye isse liya
          ans = min(ans, arr[left]);
          left = mid + 1;
        }
        else{
          //same isme bhi,right side sorted h to hmesha vhi element chota hoga
          ans = min(ans,arr[mid]);
          right = mid - 1;
        }
        }

        return ans;
    }
};
