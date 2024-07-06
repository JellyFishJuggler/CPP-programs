class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(vector<int> arr1, vector<int> arr2) {
        // code here
        int n1 = arr1.size();
        int n2 = arr2.size();
        set<int>st;
        for(int i=0; i<n1; i++){
            st.insert(arr1[i]);
        }
        // yaha set check krega apne me ki element phle se h kya? agr nh to add krdega
        for(int i=0; i<n2; i++){
            st.insert(arr2[i]);
        }

        return st.size();
    }
};