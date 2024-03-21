#include<bits/stdc++.h>
using namespace std;
int searchRange_left(int nums[], int key, int right, int left) {  //Array ke mid se left side me 1st occurence return ho rhi h

    int mid = left + (right - left) / 2;
    int ans = -1;
    while( left <= right){
        if(nums[mid] == key){
            ans = mid;
            right = mid - 1;
        }
        else if( nums[mid] > key){
            right = mid - 1;
        }
        else if( nums[mid] < key){
            left = mid + 1;
        }

        mid = left + (right - left) / 2;
    }

    return ans;
}

// ab same function bna dunga for right side ka i.e. last occurence
// jisme bas start = mid + 1 kardena first if condition me 

int main(){
  int arr[6] = {5,7,7,8,8,10};
  int target = 8;
  int s = 0;
  int e = 5;
  int index = searchRange_left(arr,target,e,s);
  cout << "1st Occurence Index is " << index;
  return 0;
}


/*
bki mera deemag kaam nhi kr rha h ki ab left aur right wale ko ek hee function me kaise daalunga
yeh leetcode wale hote he bkl h
*/