#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n = 101;  
    // cin >> n;
    int num = 0,i=0;
    while(n!=0){
        if(n&1){
            num += pow(2,i);
            i++;
        }
          n = n >> 1;
    }
    cout << "number is " << num << "\n"; 
    return 0;
}