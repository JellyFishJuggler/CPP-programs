#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack{
    int top;


public:
    int arr[MAX];
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    Stack(){
        top = -1;
    }
};

bool Stack::push(int x){
    if(top >= (MAX-1)){
        cout << "Stack Overflow" << endl;
        return false;
    }
    else{
        arr[++top] = x;
        cout << x << "Pushed into the stack" << endl;
        return true;
    }
}

int Stack::pop(){
    if(top < 0){
        cout << "Stack Underflow" << endl;
        return 0;
    }
    else{
        int x = arr[top--];
        return x;
    }
}

    if(top < 0){
        cout << "Stack is Empty" << endl;
        return 0;
    }
    else{
        int x = arr[top];
        return x;
    }
}

bool Stack::isEmpty(){
    return (top < 0);
}



int main(){
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
     
    cout << s.pop() << "Removed from the last :)" << endl;
    
    cout << "Elements present are :" << endl;
    while(!s.isEmpty()){
        cout << s.peek() << " ";
        s.pop();
    }

    return 0;
}