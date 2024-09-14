// Problem: Count the number of prime numbers less than a non-negative number, n.
// Example: Input: n = 10
//          Output: 4
//          Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

//Currently this code is not working for large numbers. It is giving time limit exceeded error.
//To optimize this code we can use Sieve of Eratosthenes algorithm.


#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number: ";
    cin >> num;
    int count=0;
    for(int i = 2; i <= num; i++){
        bool isPrime = true;
        for (int j = 2; j<= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
            
        }
        // count++;
        if (isPrime)
        {
            count++;
            // cout << i << " ";
            
        }
        
    }

    cout << count <<endl;
    return 0;
}