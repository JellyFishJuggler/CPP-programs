class Solution {
public:
    bool judgeSquareSum(int c) {
        //ek array assume krli 0 to c tk ki (sorted hogi obv)
        long left = 0;
        long right = sqrt(c);
        while(left <= right){
            //isme mid ki jgh yehi le liya | sum of squares dekh rhe h 
            long c_sum = long(pow(left,2)) + long(pow(right,2));
            //edge case agr by chance square hee bada hogya -> although hoga nh aisa kuch
            if(pow(left,2) > c){
                return false;
            }
            // agr equal h to yhi chahiye hm hence true
            if(c_sum == c){
                return true;
            }
            // agr chota h to iksa mtlb aur aage ja skte h 
            else if(c_sum < c){
                left++;
            }
            // nh nh peeche jao
            else if(c_sum > c){
                right--;
            }
        }
        return false;
    }
};