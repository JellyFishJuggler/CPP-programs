#include<iostream>
using namespace std;

class overloading{
    int a,b;
    public:
        void set(int x, int y){
            a = x;
            b = y;
        }
        void set(int x){
            a = x;
            b = 0;
        }
        void display(int a, int b){
            cout << "a: " << a << " b: " << b << endl;
        }
};

int main(){
    overloading o1;
    int a {3};
    int b {3};
    cout << "Overloading" << endl;
    o1.display(a,b);
    return 0;
}