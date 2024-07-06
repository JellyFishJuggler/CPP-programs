class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //Run Time error aa rha h vaise 

        int n = nums.size();
        //check agr size hee khtm ho rkha hai
        if(n == 0)  return;
        if(nums.empty())    return;
        int ind = -1;
        //sarre combination banye ja rhe hai..
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                //joh number chota mil rha h usko store krliya (starting point ke liye)
                ind = i;
                break;

            }
        }

        if (ind == -1) {
            //ascending / decending wala case hai..(like sorted hogi puri)
            reverse(nums.begin(), nums.end());
            return;

        }


        for (int i = n - 1; i > ind; i--) {
            //jb hmne starting point fix krliya aur ek next bigger number fir bki ke numbers ko reverse krna bki he bchega
            if (nums[i] > nums[ind]) {
                swap(nums[i], nums[ind]);
                break;
            }
        }
        //fir unko reverse kr liya
        reverse(nums.begin() + ind + 1, nums.end());
    }
};