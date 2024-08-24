//addition of 2 numbers using class

#include<iostream>
using namespace std;

class Sum{
    // int a,b;
    public :
        int add(int x, int y){
            int sum = x + y;
            return sum;
        }

};

int main(){
    Sum sum;
    int a{3};
    int b{2};
    cout << sum.add(a,b) << endl;
    return 0;
}