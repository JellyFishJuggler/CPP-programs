// matrix addtion using class
#include<iostream>
using namespace std;

class Matrix{
    public:
        int arr1[3][3];
        int arr2[3][3];
        int sum[3][3];

        void addition(int arr1[3][3], int arr2[3][3], int sum[3][3]){
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    sum[i][j] = arr1[i][j] + arr2[i][j];
                }
            }
        }

};


int main(){

    Matrix matrix;

    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3] = {{0,0,0},{1,1,1},{1,0,1}};

    matrix.addition(arr1, arr2, matrix.sum);
    return 0;
}