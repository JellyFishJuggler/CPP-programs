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

int diameterTree(Node* root, int &d){
    if(root == NULL)    return 0;

    int lh = diameterTree(root->left, d);
    int rh = diameterTree(root->right, d);

    return  max(lh, rh) + 1;
}


int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
   root->left->left = new Node(4);
   root->left->right = new Node(5);
    //root->right->left = new Node(6);
    //root->right->right = new Node(7);


    int d = 0;
    d = diameterTree(root, d);
    cout << d << endl;


    return 0;
}