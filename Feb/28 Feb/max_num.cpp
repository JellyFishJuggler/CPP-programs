#include<iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    if (a > b && a > c && a > d)
    {
        return a;
    }
    else if (b > a && b > c && b > d)
    {
        return b;
    }
    else if (c > b && a < c && c > d)
    {
        return c;
    }
    else if (d > b && d > c && a < d)
    {
        return d;
    }
    
    return 0;
}


int main(){
    int a,b,c,d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int max = max_of_four(a,b,c,d);
    cout << max;
    return 0;
}