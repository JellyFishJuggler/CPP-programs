class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        // a = -1  b = -1  c = -1
        int lastseen[3] = {-1,-1,-1};
        int count = 0;
        for(int i=0; i<n; i++){
            //udpate the last position 
            lastseen[s[i] - 'a'] = i;
            //simple check if the elements are not -1 (optional hai shyd)
            if(lastseen[0] != -1 && lastseen[1] != -1 && lastseen[2] != -1){
                //maanlo a = 3 b = 4 c = 5 then '3' indx se count krna start krdo :)
                count += 1 + min(lastseen[0],min(lastseen[1],lastseen[2]));
            }
        }

        return count;
    }
};