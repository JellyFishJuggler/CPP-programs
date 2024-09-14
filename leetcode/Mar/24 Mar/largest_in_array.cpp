#include <bits/stdc++.h> 
using namespace std;
//TC = O(nlogn)
int largestElement(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    return arr[n-1];
}

// For optimal solution => use for loop  to  traverse the array then 
                                // check if the a[i] > largest
                                    // largest = a[i]
// TC = O(n)