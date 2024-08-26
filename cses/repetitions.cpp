#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    unordered_map<char,int> mpp;

    cin >> s;
    int n = s.length();
    
    for(int i=0; i<n; i++){
        mpp[s[i]]++;
    }

    for(auto i:mpp){
        if(i.second > 1){
            cout << i.second << endl;
            break;
        }
    }
    
    return 0;
}