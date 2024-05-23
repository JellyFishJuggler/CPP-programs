class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0, maxSum = 0;
        int n = cardPoints.size();
        for(int i=0; i<k;i++){
            // yaha se sare elements ka sum leliya
            sum += cardPoints[i];

        }
        maxSum = max(maxSum, sum);  //straight forward h ki max ko update krdiya
        for(int i=0;i<k;i++){

            sum -= cardPoints[k-1-i];   //ab yaha hme 1st element ko remove kiya h tki hm last element ko add kr ske
            // basically window ko 2 parts me divide kr rhe h
            sum += cardPoints[n-1-i];
            //aur ab yaha se last element ko add kr rhe h;
            maxSum = max(maxSum, sum);
            //joh bhi value max nikalegi voh answer ho jayega hamra 
        }
        return maxSum;
    }
};