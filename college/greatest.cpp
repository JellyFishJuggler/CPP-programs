#include<bits/stdc++.h>
using namespace std;

class G_Even{
private:
    int isEven;
public:
    G_Even(){
        isEven = -1;
    }
    
    int greatestEven(int n, int num){
        int temp = INT_MIN;
        for(int i=0; i<n; i++){
            if(num % 2 == 0)
            {
                isEven = 1;
                temp = max(temp, num);
            }
        }
        isEven = 0;
        
        return temp;
    } 
};

int main(){
    G_Even gven;
    int n, num;
    int result = 0;
    cout << "Enter number of input number: ";
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> num;
        result = gven.greatestEven(n,num);
    }
    cout << result;
    return 0;
}