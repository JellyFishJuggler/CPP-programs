#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

vector<int> postorderTraversal(Node* root) {
    vector<int> result;
    if (root == nullptr) return result;

    stack<Node*> st;
    st.push(root);

    while (!st.empty()) {
        Node* current = st.top();
        st.pop();
        result.push_back(current->data);

        if (current->left != nullptr) {
            st.push(current->left);
        }
        if (current->right != nullptr) {
            st.push(current->right);
        }
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> result = postorderTraversal(root);
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}
