class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int ans = 0, value = 0;
        unordered_map<int, vector<int>>mp;
        mp[0].push_back(-1);
        for(int i=0;i<arr.size();i++){
            value ^= arr[i];
            if(mp.find(value) != mp.end()){
                for(auto idx:mp[value]){
                    ans += (i-idx) - 1;
                }
            }
            mp[value].push_back(i);
        }
        return ans;
    }
};