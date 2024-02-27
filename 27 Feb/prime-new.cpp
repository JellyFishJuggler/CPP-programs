#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cout << "Enter Number = ";
    cin >> num;

    bool isPrime = true;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if ( num%i==0)
        {
            isPrime = false;
        }
        
    }
    
    if (isPrime = true)
    {
        cout << "Prime Number"<<endl;
    }
    
    else{
        cout << "Composite Number"<<endl;
    }

    return 0;
}