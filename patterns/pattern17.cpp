/* A 
   B C
   D E F
   G H I J*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i =1;
    char alfa = 'A' +i-1;                  //Alternate method : use 'A' + i +j -2
    while(i<=n){
        int j =1;
                             
        while(j<=i){
            cout << alfa;
            alfa++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}