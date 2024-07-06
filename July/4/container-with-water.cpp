class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n - 1;
        int mxArea = 0;
        while(l<r){
            //dkeho graph imagine krke dekhna toh area between two lines nikal rhe h  aur jiski slope(height) km h usse use kr rhe hai..
            mxArea = max(mxArea, (r-l) * min(height[l],height[r]));
            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }

        return mxArea;
    }
};