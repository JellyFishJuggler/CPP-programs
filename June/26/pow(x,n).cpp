class Solution {
public:
    double myPow(double x, int n) {
        //base condition hai yeh
        if(n==0) return 1;
        // agr number negative h to, n ka absolute lekr +ve krdo && x ko 1/x krdo
        if(n<0) {
            n = abs(n);
            x = 1/x;
        }
        //even ki condition agr power hai to 2 ka 4 krdo
        if(n%2==0){
            return myPow(x*x, n/2);
        }
        // yeh odd ka h
        else{
            return x*myPow(x, n-1);
        }
    }
};