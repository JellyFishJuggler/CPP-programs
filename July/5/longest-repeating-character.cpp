class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>hash(26);    //upper case ka array
        int n = s.size();
        int maxi = 0;
        int maxlen = 0, len = 0, l = 0, r = 0;
        while(r < n){
            hash[s[r] - 'A']++;
            maxi = max(maxi, hash[s[r] - 'A']);

            int len = r - l + 1;
            //length ka difference subarray ka size hai ji
            int change = len - maxi;
            //subarray ka size bda na hone dena hai kyuki 'k' se jda ki bdi window possible nh hai banana.
            if (change > k) {
                hash[s[l] - 'A']--;
                l++;
            }

            maxlen = max(maxlen, r - l + 1);
            r++;
        }

        return maxlen;
    }
};