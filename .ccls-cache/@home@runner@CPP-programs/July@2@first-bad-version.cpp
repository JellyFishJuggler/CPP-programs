// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        int r = n;
        while(l < r){
            int mid = l + (r-l) / 2;
            bool halo = isBadVersion(mid);
            if(halo == true){
                r = mid; 
            }
            else{
                l = mid + 1;
            }
        }

        return l;
    }
};