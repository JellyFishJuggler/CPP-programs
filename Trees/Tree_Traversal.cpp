//inorder(LNR) preorder(NLR) postorder(LRN) 
// N = Node, L = Left, R = Right

// travel techniques -> BFS, DFS
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

    void preorder(Node* root){
        
        if(root == nullptr) return;

        print(root->data);
        preorder(root->left);
        preorder(root->right);
    }

    void inorder(Node* root){
        if(root == nullptr) return;

        inorder(root->left);
        print(root->data);
        inorder(root->right);
    }

    void postorder(Node* root){
        if(root == nullptr) return;

        
        postorder(root->left);
        postorder(root->right);
        print(root->data);
    }

    void print(int val){
        cout << val << " ";
    }
};


int main(){

    struct Node *root = new Node(1);
    root->left = new Node(4);
    root->right = new Node(3);
    root->left->left = new Node(2);
    root->left->right = new Node(6);
    root->right->left = new Node(0);
    root->right->right = new Node(7);

    root->preorder(root);
    cout << endl;
    root->inorder(root);
    cout << endl;
    root->postorder(root);

    return 0;
}