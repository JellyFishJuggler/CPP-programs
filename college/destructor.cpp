#include <bits/stdc++.h>
using namespace std;

// int count = 0;

class Destructor
{
public:
    int count = 0;
    Destructor()
    {

        cout << "Constructor called " << "\n";
        ++count;
        cout << "Constructor +1 : " << count << "\n";
    }

    ~Destructor()
    {
        cout << "Destructor called" << "\n";
        count--;
        cout << "Destructor -1 : " << count << "\n";
    }
};

int main()
{
    Destructor t_1, t_2;  
    return 0;
}