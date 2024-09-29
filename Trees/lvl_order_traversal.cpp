// for lvl order traversal of a binary tree -> Queue is always required.
#include <bits/stdc++.h>
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

vector<vector<int>> levelOrder(Node* root){
    vector<vector<int>> ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        vector<int> lvl;
        int n = q.size();
        for(int i=0; i<n; i++){
            Node* temp = q.front();
            q.pop();
            if(temp->left != nullptr)  q.push(temp->left);
            if(temp->right != nullptr) q.push(temp->right);
        
            lvl.push_back(temp->data);  

        }

        ans.push_back(lvl);
    }

    return ans;
}

int main() {
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<vector<int>> ans = levelOrder(root);
    for(auto x: ans){
        for(auto y: x){
            cout << y << " ";
        }
        cout << endl;
    }
    
    cout << "Hello, World!" << endl;
    return 0;
}