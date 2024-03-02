// This code is working correctly when the initial values of 'a' and 'b' are set to 5 and 10 respectively.

#include <iostream>
#include <cmath>
using namespace std;

void pointer(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *b = abs(*b);
}

int main()
{
    int a = 4, b = 5;
    int *pa = &a;
    int *pb = &b;
    cout << a << " " << b << endl;
    scanf("%d %d", &a, &b);
    pointer(pa, pb);
    printf("%d %d", a, b);
    cout << a << " " << b << endl;
    return 0;
}
