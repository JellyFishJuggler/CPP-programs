#include<iostream>
using namespace std;

int main(){
    int a=0, b=1,c=0;
    int n=5;
    // cout << "Enter the number:";
    // cin >> n;
    cout <<a<<endl;
    cout <<b<<endl;
    for(int i=1; i <n;i++){
        c = a+b;
        cout <<c<<endl;
        a =b;
        b = c;
        
    }
    
    return 0;

}