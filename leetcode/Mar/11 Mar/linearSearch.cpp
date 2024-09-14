#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[],int key, int size){        //For searching the element in the array
  for(int i = 0; i < size; i++){
    if(key == arr[i]){
      return 1;
    }
  }

  return 0;
}

void printArray(int arr[], int size){
  for(int i=0;i<size;i++){
    cout << arr[i]  << endl;
  }
} 

int main(){
  int target,n;
  int arr[100];
  
  cout << "Enter the size of the array: ";
  cin >> n;
  cout << "Enter the elements of the array: " <<endl;
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }

  cout << "Enter the element to find : ";
  cin >> target;
  
  int found  = linearSearch(arr,target,n);
  if(found){
    cout << "Element found" << endl;
  }
  else{
    cout << "Element is not in the provided array" << endl;
  }
  cout << "Provided array is : " << endl;
  printArray(arr,n);
  return 0;
}