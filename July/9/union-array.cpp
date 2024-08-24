class Solution{
public:
//arr1,arr2 : the arrays
// n, m: size of arrays
//Function to return a list containing the union of the two arrays. 
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    set<int>st;
    //taking elements of 1st array
    for(int i=0; i<n; i++){
        st.insert(arr1[i]);
    }
    //taking elements of 2nd array
    for(int i=0; i<m; i++){
        st.insert(arr2[i]);
    }
    vector<int>srijan;
    //pushing back all the unique elements
    for(auto i:st){
        srijan.push_back(i);
    }

    return srijan;
}