//addition + sub + div + mul

#include<iostream>
using namespace std;

class Opeartions{
    int c1,c2,c3,c4;

    public:
        int sum(int a, int b){
            int c1 = a + b;
            return c1;
        }
        int sub(int a, int b){
            int c2 = a - b;
            return c2;
        }
        int mul(int a, int b){
            int c3 = a * b;
            return c3;
        }
        int div(int a, int b){
            int c4 = a/ b;
            return c4;
        }
        
};

int main(){
    Opeartions op;
    int a{2};
    int b{5};
    int c1 = op.sum(a,b);
    int c2 = op.sub(a,b);
    int c3 = op.mul(a,b);
    int c4 = op.div(a,b);

    cout << "Sum is: " << c1 << endl;
    cout << "Sub is: " << c2 << endl;
    cout << "Mul is: " << c3 << endl;
    cout << "Div is: " << c4 << endl;

    return 0;
}