#include <iostream>
using namespace std;

int main()
{
    float height, base, area;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    area = 0.5 * base * height;

    cout << "\nThe area of the triangle is: " << area << endl;
    return 0;
}