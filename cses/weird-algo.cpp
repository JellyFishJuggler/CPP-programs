#include<bits/stdc++.h>
using namespace std;

void weirdAlgo(long long n){
    //int ans = 0;
    while(n!=1){
        if(n % 2 == 0){
            n /= 2;
        }
        else{
            n = 3*n + 1;
        }
        cout << n << " ";
    }
    
}

int main(){
    long long n;
    cin >> n;
    cout << n << " ";
    weirdAlgo(n);
    return 0;
}