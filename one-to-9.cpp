#include<iostream>
#include<string>
using namespace std;

int main(){
    int element;
    cout << "Enter number:";
    cin >> element;
    string arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; 
    if (element >= 1 && element <= 9)
        {
            cout << arr[element-1];
        }

        else{
            cout << "Greater than 9";
        }
        
    
    return 0;
}