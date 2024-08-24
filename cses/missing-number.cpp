#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<long long> arr, long long n){
    long long sum {0};
    long long og_sum {n*(n+1)/2};

    for(int i=0; i<n ; i++){
        sum += arr[i];
    }

    return og_sum - sum;
}


int main(){
    long long n;
    cin >> n;
    vector<long long> v(n);
    for(int i=0; i<n-1; i++){
        cin >> v[i];
    }

   cout <<  missingNumber(v,n) << endl;

    return 0;
}