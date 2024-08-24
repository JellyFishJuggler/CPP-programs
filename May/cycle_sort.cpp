#include<bits/stdc++.h>
using namespace std;

void swap(vector<int>&arr,int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int main(){
    vector<int> arr = {3, 5, 2, 1, 4};
    int n = arr.size();
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
    for(int i=0;i<n;i++){
        int correctIndex = arr[i] - 1;
        if(arr[correctIndex] != arr[i]){
            swap(arr,correctIndex,i);
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}