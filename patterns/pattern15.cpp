/* 
For n=3 the output should be:
   A B C
   D E F
   G H I
But the output is:
   C D E
   F G H
   I J K
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i=1;
    char alfa = 'A' + n - i;                                  //Alternate Method : char alfa = 'A' + i +j -2;
    while (i<=n){
        int j =1;
        while(j<=n){
            cout << alfa;
            alfa++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}