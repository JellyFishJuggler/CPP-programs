#include<bits/stdc++.h>
using namespace std;

class Complex {
private:
    int img, real;
public:
    Complex(int a=0, int b=0){
        img = a;
        real = b;
    }
    
    Complex operator+ (Complex const &obj){
        Complex res;

        res.real = res.real + obj.real;
        res.img = res.real + obj.img;
        return res;        
    }

    void print(){
        cout << real << "+i" << img << "\n";
    }
};


int main(){
    Complex c1(10,5) , c2(2,4);
    Complex c3 = c1 + c2;
    cout << "Complex 1 : ";
    c1.print();
    cout << "Complex 2 : ";
    c2.print();
    cout << "Complex 3 : ";
    c3.print();
    return 0;
}