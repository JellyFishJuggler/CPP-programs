#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    int sum = 0;
    int find[n];
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> find[i];
        }

        

        for (int i = 0; i < n; i++)
        {
            if (find[i] < 0)
            {
                find[i] = abs(find[i]);
            }

            sum += find[i];
        }

            cout << sum << endl;
    }


    return 0;
}