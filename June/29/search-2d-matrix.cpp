class Solution {
public:

//TC : O(log(m*n))

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // [[1,2,3], [5,6,7], [12,14,16]]
        //size of complete array => row && size of subarray => col
        // row and column 
        int row = matrix.size();
        int col = matrix[0].size();

        int l = 0;
        int r = row * col - 1;
        int mid = l + (r-l) /2;
        //to find the mid element in 2d matrix toh yeh logic use krte hai.
        //  mid/col => rows &&  mid%col => columns
        //basic binary cheeze
        while(l<=r){
            mid = l + (r-l) / 2;
            int midElement = matrix[mid/col][mid%col];
            if(midElement == target)    return true;
            else if(midElement < target)    l = mid + 1;
            else    r = mid - 1;

        }

        return false;
    }
};

//brute force method
//TC : O(N^2)

/*
    for(int i=0; i<array.size();i++){
        for(int j=0; j < array.size(); j++){
            if(array[i][j] == target){
                return true;
            }
        }
    }

    return false;

*/