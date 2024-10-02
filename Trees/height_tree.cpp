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

int depth(Node* root){
    if(root == NULL)    return 0;

    int lh = depth(root->left);
    int rh = depth(root->right);

    return  max(lh, rh) + 1;
}

int main(){

    Node* root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    //root->left->left = new Node(4);
    //root->left->right = new Node(5);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    cout << depth(root) << endl;

    return 0;
}