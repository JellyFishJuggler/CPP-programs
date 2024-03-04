/* A
   B B
   C C C
*/
//Alternate method : char ch = 'A' + i -1;

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i =1;
    char alfa = 'A';
    while(i<=n){
        int j =1;
        while(j<=i){
            cout << alfa;
            j++;
            
        }
        cout << endl;
        i++;
        alfa++;
    }
    return 0;
}