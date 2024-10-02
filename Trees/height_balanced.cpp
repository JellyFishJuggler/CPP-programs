#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

int heightBalance(Node* root){
    if (root == nullptr) return 0; // base case for null nodes
    int lh = heightBalance(root->left);
    int rh = heightBalance(root->right);
    //condition of height balance tree
    if(lh == -1 || rh == -1 || abs(lh - rh) > 1) return -1;
    return max(lh, rh) + 1;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    //root->left->left = new Node(4);
    //root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->left = new Node(8);

    if (heightBalance(root) != -1)
        cout << "The tree is height-balanced." << endl;
    else
        cout << "The tree is not height-balanced." << endl;

    return 0;
}