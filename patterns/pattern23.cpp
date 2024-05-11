/* _ _ _ 1
   _ _ 2 2
   _ 3 3 3
   4 4 4 4
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout <<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}