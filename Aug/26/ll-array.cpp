#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int data1, Node *next1){
            data = data1;
            next = next1;
        }
        Node(int data1){
            data = data1;
            next = nullptr;
        }
};

int main(){
    vector<int>arr = {1,2,3,4,5};
    Node *x = new Node(arr[0]);
    cout << x << endl;
    cout << x->data << endl;
    return 0;
}