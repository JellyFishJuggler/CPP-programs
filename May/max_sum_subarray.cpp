long maximumSumSubarray(int K, vector<int> &Arr , int N){
    // code here 
    long sum=0, maxSum = 0; 

    for(int i=0;i<N;i++){
        sum += Arr[i];

        if(i == K -1){
            maxSum = max(maxSum,sum);
        }
        else if (i >= K){
            sum -= Arr[i-K];
            maxSum = max(maxSum,sum);
        }
    }

    return maxSum;
}