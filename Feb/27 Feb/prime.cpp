#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number:";
    cin >> num;

    for (int i = 2; i <= num; i++)
    {
        if(num % i != 0)    {cout <<"Provided number is a Prime Number."<<endl; break;}
        else    {cout<<"Provided number is not a Prime Number."<<endl; break;}
    }
    
    return 0;
}