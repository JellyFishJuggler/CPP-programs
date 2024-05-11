/* 1 1 1 1
     2 2 2
       3 3
         4
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int space = i -1;
        while (space)
        {
            cout<<" ";
            space --;
        }
        int j=i;
        while(j<=n){
            cout<<i;
            j++;
        }
        cout << endl;
        i++;
        
    }
}