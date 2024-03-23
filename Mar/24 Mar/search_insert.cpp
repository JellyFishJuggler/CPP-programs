//CodingNinjas - Search Insert Position (partially accepted - 49/50)
#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& arr, int x)
{
    int n = arr.size();
    int ans = n;
    int left = 0, right = n-1;
    int mid = left + (right - left) / 2 ;
    while(left <= right){
        if(arr[mid] >= x){
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }

        mid = left + (right - left) / 2;

    }

    return ans;
}
int main() {
    vector<int> arr = {1, 3, 5, 6};
    int x = 5;
    int result = searchInsert(arr, x);
    cout << "Position: " << result << endl;
    return 0;
}