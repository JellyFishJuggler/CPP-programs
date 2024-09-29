#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

vector<int> inOrder(Node* root) {
    vector<int> ans;
    stack<Node*> s;

    while (root != NULL || !s.empty()) {
        if (root != NULL) {
            s.push(root);
            root = root->left;
        } 
        else {
            if (s.empty()) break;

            root = s.top();
            s.pop();

            ans.push_back(root->data);
            root = root->right;
        }
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

    vector<int> result = inOrder(root);

    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}