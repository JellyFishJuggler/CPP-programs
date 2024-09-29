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

vector<int> postOrder(Node* root){
    vector<int>ans;
    stack<Node*> s1,s2;
    if(root == nullptr) return ans;

    s1.push(root);
    while(!s1.empty()){
        root = s1.top();
        s1.pop();

        s2.push(root);
        if(root->left != nullptr)   s1.push(root->left);
        if(root->right != nullptr)  s1.push(root->right);
    }
    
    while(!s2.empty()){
        ans.push_back(s2.top()->data);
        s2.pop();
    }

    return ans;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> result = postOrder(root);
    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}