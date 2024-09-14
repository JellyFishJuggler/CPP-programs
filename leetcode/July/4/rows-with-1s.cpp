class Solution{
public:

    int lowerbound(vector<int> arr,int m,int x){
        int high = m-1;
        int low = 0;
        int ans = m;

        while(low <= high){
            int mid = (high + low)/2;

            if(arr[mid] >= x){
                ans  = mid;
                high = mid -1;
            }
            else low = mid + 1;
        }
        return ans;
    }
    int rowWithMax1s(vector<vector<int> > arr, int n, int m) {

        int index = -1;
        int count = 0;

        for(int i =0;i<n;i++)
        {
            int ones = m - lowerbound(arr[i],m,1);

            if(ones > count){
                count = ones;
                index = i;
            }
        }
        return index;
    }

};