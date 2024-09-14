class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int>mp; 
        int temp = INT_MIN; 
        int ans = 0; 
        int n = nums.size(); 
        for(int i=0; i<n; i++){
            mp[nums[i]]++;  // harr element ki frequency ko increase kar rhe map me
            if(mp[nums[i]] > temp){ 
                temp = mp[nums[i]];  // Toh temp ko update karte hain
            }
        }

        // Map ke elements ko aise iterate krte h like damn!!
        for(auto it : mp){
            if(it.second == temp){  // Agar element ki frequency temp ke barabar ho jaye isliye next freqyencey dekh rhe h
                ans += temp;  // Toh us frequency ko ans mein add karte hain
            }
        }

        return ans;
    }
};
