/* 
   Pattern 4:
   3 2 1
   3 2 1
   3 2 1 
*/

 // The logic of using cout << n-j+1 is to print the value of n-j+1 in each iteration of the inner loop. This expression calculates the value to be printed based on the current value of j. It starts from n and decrements by j in each iteration, resulting in a pattern where the numbers decrease from n to 1 in each row.
 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    int i = 1;
    while(i <=n){
        int j =1;
        while(j <=n){
            cout << n-j+1 ;              
            j++;
        }
        cout <<endl;
        i++;
    }
    return 0;
}