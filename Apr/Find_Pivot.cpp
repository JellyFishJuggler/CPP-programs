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