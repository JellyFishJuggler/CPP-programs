class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int l = 0, r = 0, avg = 0;
        int len = 0;
        long long sum = 0;
        int n = arr.size();
        int ans = 0;
        //phle 'k' tk ke elements ka sum krliya fir avg ke liye condition dekhli
        while (r < k) {
            sum += arr[r];
            r++;
        }
        //yeh condition
        if (sum / k >= t) {
            ans++;
        }
        //fir aage ke numbers ke liye dekh liya same chez
        while(r < n){
            sum += arr[r];
            sum -= arr[l];
            l++;
            r++;
            if (sum / k >= t) {
                ans++;
            }
        }

        return ans;
    }
};