int findKRotation(vector<int> &arr){
    // Write your code here.    
    int n = arr.size();
    int left = 0;
    int right = n -1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] > arr[0]){
            left = mid + 1;
        }
        else{
            right = mid;
        }
    }

    return left;

}

//TLE aa rha h abhi
//https://www.naukri.com/code360/problems/rotation_7449070?leftPanelTabValue=PROBLEM - CodingNinjas


//Part 2 : find the pivot where the sum of left side is equal to left side of the array.


/*
  int leftSum = 0;
  int rightSum = 0;
  
  for(int i=0;i<n;i++)      ....n is the size of the arrray
  {
    rightSum += nums[i];
  }

  for(int j=0;j<n;j++){
    rightSum -= nums[j];
    if(rightSum == leftSum){
      return j;
    }
    leftSum += nums[j];
  }
*/