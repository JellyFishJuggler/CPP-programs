class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //256 characters hee hote hai
        vector<int>mpp(256,-1);
        int l=0,r=0,maxlen=0;
        int n = s.size();
        int len = 0;
        while(r<n){
            //agr elemenet hua toh '-1' possible nh hai
            if(mpp[s[r] != -1]){
                // eg : "abcbssczhcb" agr s[r] = s to uske aage wale character pe 'l' ko shift krna hai...
                l = max(mpp[s[r]] + 1, l);
                len = r - l + 1;
                //waha tk ki length nikalo bhai..
                maxlen = max(maxlen, len);
                mpp[s[r]] = r;
                r++;
            }
        }

        return maxlen;
    }
};