class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
    
            vector<int>ans;
            //int n = arr.size();
            int maxi = arr[n-1];
            ans.push_back(maxi);
            for(int i=n-2; i>=0; i--){
                if(arr[i] > maxi){
                    ans.push_back(arr[i]);
                    maxi = arr[i];
                }
            }
            reverse(ans.begin(), ans.end());
            return ans;

        
        // vector<int>ans;
        // for(int i=0; i<n; i++){
        //     //check hai bas ignore krna h to kr skte ho not a big deal tbh
        //    bool leader = true;
        //    for(int j=i+1; j<n; j++){
        //        //next element compare krlo bas
        //        if(arr[i] < arr[j]){
        //            leader = false;
        //            break;
        //        }
        //    }
        //     //leader jaisa ho to push krdo bas
        //    if(leader)   ans.push_back(arr[i]);
        // }   
        // return ans;
    }
};