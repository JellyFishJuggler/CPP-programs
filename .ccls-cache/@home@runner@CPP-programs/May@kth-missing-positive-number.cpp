class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        // Brute Force
        // for(int i =0; i<n; i++){
        //     if(arr[i] <= k){
        //         k++;
        //     }
        //     else{
        //         break;
        //     }
        // }
        // return k;

        //Binary Search
        int l = 0;
        int r = n - 1;
        //agr 'K' hee first element se chota h to vohi hua na fir answer
        //[1,3,5,11] & k=0 fir toh answer "k" hee hua.
        if(k < arr[0])  return k;
        
        while(l <= r){
            int mid = l + (r-l) / 2;
            //agr k = 5 hua aur jb hm arr[2] = 5 pe hai tb hmre paas missing number 2 hai..aur sath me k = 5 hai to mtlb hme 3 aur missing numbers tk jana hai...
            int missin = arr[mid] - (mid + 1);
            //int more = k - missin;
            if(missin < k)  l=mid+1;
            else    r=mid-1;
        }

        //high+1+k
        //yaha low = high + 1 hai 
        return l+k;
       // {Waiting List me hai abhi}
    }
};