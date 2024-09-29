#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

int main()
{
    struct Node *root = new Node(1);

    root->left = new Node(6);
    root->right = new Node(5);
    
    root->left->right = new Node(2);

    return 0;
}