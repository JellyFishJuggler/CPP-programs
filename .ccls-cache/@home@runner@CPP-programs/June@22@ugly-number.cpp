class Solution {
public:
    bool isUgly(int n) {
        if(n==0)    return false;
        //if(n==1)    return true;
    // har 'n' ko 2 || 3 || 5 se divide krdiya tki fir check kr ske ki agr n == 1 aa rha h to mtlb divisible tha hence true return kr diya fir.
        while(n>=1){
            if(n%2 == 0){
                n = n/2;
            }
            else if(n%3 == 0){
                n = n/3;
            }
            else if(n%5 == 0){
                n = n/5;
            }
            else{
                break;
            }
        }  
        if(n==1)    return true;

        return false;
    }
};