#include<bits/stdc++.h>
using namespace std;

int findPivot(int nums[]) {
    int left_sum = 0;
    int right_sum = 0;
    for(int i=0; i<6; i++){
        right_sum += nums[i];
    }
    for(int j=0; j<6; j++){
        right_sum -= nums[j];
        if(right_sum == left_sum){
            return j;
        }
        left_sum += nums[j];
    }
    return -1;
}

int main() {
    int nums[6] = {1, 7, 3, 6, 5, 6};
    int pivotIndex = findPivot(nums);
    cout << "Pivot index: " << pivotIndex << endl;
    return 0;
}