#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int greater = 1;
    int nums[n];
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
             greater = max(greater,__gcd(nums[i],nums[j]));
              
        }
    }

    cout << greater;
    return 0;
}