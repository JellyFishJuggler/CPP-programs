#include<iostream>
using namespace std;

int setBits(int N) {
        int count = 0;
        while(N){
            int bit  = N & 1;
            if(bit){
                count++;
            }
            
            N = N >> 1;
        }
        
        return count;
}

int main() {
    int N;
    cin >> N;

    cout << setBits(N) << endl;
    return 0;
}