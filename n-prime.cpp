#include<iostream>
using namespace std;

int  main() {
    int n=0, m=10, count=0;
    for(int i =2; i<=m; i++){
        for ( n = 0; n < i; n++)
        {
            count += 1;
        }
           
    }

    cout << count<<endl;
    return 0;
}

// not in working state.