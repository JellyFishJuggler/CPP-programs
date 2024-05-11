/*
    1 2 3
    4 5 6
    7 8 9
*/

// Logic : use 'count' variable for printing the counting from count = 1 to count = n

#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    int count = 1;
    while (i <=n)
    {
        int j=1;
        while (j <=n)
        {
          cout << count;
          count++;
          j++;
        }

        cout <<endl;
        i++;
        
    }
    
    return 0;
}