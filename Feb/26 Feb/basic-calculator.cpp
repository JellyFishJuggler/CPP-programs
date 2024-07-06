#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int sum, sub, div, mul;
    cout << "Enter 1st number : ";
    cin >> num1;    
    cout << "Enter 2nd number : ";
    cin >> num2;

    char choice;
    cout << "[A]ddition [S]ubstraction [M]ultiplication [D]ivision";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 'A':
        sum = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is " << sum << endl;
        break;
    case 'S':
        sub = num2 - num1;
        cout << "Subtraction of " << num1 << " from " << num2 << " is " << sub << endl;
        break;
    case 'M':
        mul = num1 * num2;
        cout << "Product of " << num1 << " and " << num2 << " is " << mul << endl;
        break;
    case 'D':
        if(num1 == 0){
            cout << "Division by zero is not possible" << endl;
        }
        else
        {
            div = num1 / num2;
            cout << "Division of " << num1 << " by " << num2 << " is " << div << endl;
        }
        break;
    default:
        cout << "Invalid Choice!" << endl;
        break;
    
    return 0;
    }
}