// preorder traversal using stack
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

vector<int> preOrder(Node* root){
    vector<int> ans;
    stack<Node*> s;

    s.push(root);
    while(!s.empty()){
        vector<int>temp;
        for(int i=0; i<s.size(); i++){
            Node* curr = s.top();
            s.pop();
            //right isliye kiya h taki, stack mein left nodes upr ho aur voh phle pop ho ske.
            if(curr->right != nullptr) s.push(curr->right);
            if(curr->left != nullptr) s.push(curr->left);
            temp.push_back(curr->data);
        }

        ans.insert(ans.end(), temp.begin(), temp.end());
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

    vector<int> result = preOrder(root);

    for(int val : result){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}