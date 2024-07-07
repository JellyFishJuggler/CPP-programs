long maximumSumSubarray(int K, vector<int> &Arr , int N){
    // code here 
    // long sum=0, maxSum = 0; 

    // for(int i=0;i<N;i++){
    //     sum += Arr[i];

    //     if(i == K -1){
    //         maxSum = max(maxSum,sum);
    //     }
    //     else if (i >= K){
    //         sum -= Arr[i-K];
    //         maxSum = max(maxSum,sum);
    //     }
    // }
    int l = 0, r = 0, maxSum = 0, sum = 0;
    while(r < K){
        sum += Arr[r];
        //maxSum = sum;
        r++;
    }
    while(r < N){


            sum += Arr[r];
            sum -= Arr[l];
            l++;

        maxSum = max(maxSum, sum);
        r++;
    }

    //return maxSum;

    return maxSum;
}