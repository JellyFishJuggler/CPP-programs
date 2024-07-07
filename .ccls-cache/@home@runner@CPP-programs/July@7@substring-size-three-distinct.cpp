class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char,int>mpp;
        int l=0,r=0;
        //bola hua h ki subarray ki length = 3 hone h 
        int k = 3;
        int maxCount = 0, count = 0;
        while(r < s.size()){
            //add krlo ji
            mpp[s[r]]++;
            int len = r - l + 1;
            // length agr 3 se km h to increase it plis
            if(len < k){
                r++;
            }
            else{
                //size same hogya to count + 1
                if(mpp.size() == k){
                count++;
                }
                //remove plis
                mpp[s[l]]--;
                //mila hee nh to kick krdo
                if(mpp[s[l]] == 0){
                    mpp.erase(s[l]);
                }
                l++;
                r++;
            }
        }

        return count;
    }
};