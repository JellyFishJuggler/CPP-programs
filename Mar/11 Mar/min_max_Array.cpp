#include<bits/stdc++.h>
using namespace std;

int maxArray(int arr[], int size){
  int max = INT_MIN;
  for(int i=0;i<size;i++){
    if(max < arr[i]){
      max  = arr[i];
    }
  }

  return max;
}

int minArray(int arr[], int size){          
  int min = INT_MAX;
  for(int i=0;i<size;i++){
    if(min > arr[i]){
      min  = arr[i];
    }
  }

  return min;
}

int main(){
  int arr[100] = {1,44,24,7,4,88,3};
  int n = 7; //size of the array
  int max_array = maxArray(arr,n);
  cout << max_array;
  cout << endl;
  int min_array = minArray(arr,n);
  cout << min_array;
  return 0;
}