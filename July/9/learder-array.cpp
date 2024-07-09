class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
        vector<int>ans;
        for(int i=0; i<n; i++){
            //check hai bas ignore krna h to kr skte ho not a big deal tbh
           bool leader = true;
           for(int j=i+1; j<n; j++){
               //next element compare krlo bas
               if(arr[i] < arr[j]){
                   leader = false;
                   break;
               }
           }
            //leader jaisa ho to push krdo bas
           if(leader)   ans.push_back(arr[i]);
        }   
        return ans;
    }
};