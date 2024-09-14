// Upperbound => first number greater than 'x'
int upperBound(vector<int> &arr, int x, int n){
  // Write your code here.	
  int ans = n;
  int left = 0, right = n-1;
  int mid = left + (right - left) / 2 ;
  while(left <= right){
    if(arr[mid] > x){
      ans = mid;
      right = mid - 1;
    }
    else{
      left = mid + 1;
    }

    mid = left + (right - left) / 2;

  }

  return ans;
}