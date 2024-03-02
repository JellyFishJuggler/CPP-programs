// This code is working correctly when the initial values of 'a' and 'b' are set to 5 and 10 respectively.

#include <iostream>
#include <cmath>
using namespace std;

void pointer(int *a, int *b)
{
    *a = *a + *b;
    int temp = *a - *b;
    *b = abs(temp);
}

int main()
{
    int a = 4, b = 5;
    int *pa = &a;
    int *pb = &b;
    
    scanf("%d %d", &a, &b);
    pointer(pa, pb);
    printf("%d %d", a, b);
    
    return 0;
}
