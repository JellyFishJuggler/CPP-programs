#include <iostream>
using namespace std;
int subtractProductAndSum(int n)
{

    int sum = 0;
    int prod = 1;

    while (n != 0)
    {
        int rem = 0;

        rem = n % 10;
        sum += rem;
        prod *= rem;
        n /= 10;
    }

    return prod - sum;
}

int main()
{
    int n;
    cin >> n;
    cout << subtractProductAndSum(n);
    return 0;
}