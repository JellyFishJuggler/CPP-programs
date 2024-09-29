#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void allInOneTraversal(TreeNode *root, vector<int> &inOrder, vector<int> &preOrder, vector<int> &postOrder)
{
    if (root == NULL)
        return;

    // Pre-order: Process the root first
    preOrder.push_back(root->val);

    // Traverse the left subtree
    allInOneTraversal(root->left, inOrder, preOrder, postOrder);

    // In-order: Process the root after the left subtree
    inOrder.push_back(root->val);

    // Traverse the right subtree
    allInOneTraversal(root->right, inOrder, preOrder, postOrder);

    // Post-order: Process the root after the right subtree
    postOrder.push_back(root->val);
}

int main()
{
    // Create a sample tree:
    //        1
    //       / \
    //      2   3
    //     / \ / \
    //    4  5 6  7
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<int> inOrder, preOrder, postOrder;
    allInOneTraversal(root, inOrder, preOrder, postOrder);

    // Print the traversals
    cout << "In-order: ";
    for (int val : inOrder)
        cout << val << " ";
    cout << endl;

    cout << "Pre-order: ";
    for (int val : preOrder)
        cout << val << " ";
    cout << endl;

    cout << "Post-order: ";
    for (int val : postOrder)
        cout << val << " ";
    cout << endl;

    return 0;
}

/*
    TreeNode Structure: Defines a binary tree node with an integer value and pointers to left and right children. The constructor initializes these values.
    
    allInOneTraversal Function:

    Base Case: If the current node (root) is NULL, the function returns immediately.
    Pre-order: The value of the current node is added to the preOrder vector.
    Left Subtree: Recursively traverses the left subtree.
    In-order: After traversing the left subtree, the value of the current node is added to the inOrder vector.
    Right Subtree: Recursively traverses the right subtree.
    Post-order: After traversing the right subtree, the value of the current node is added to the postOrder vector.
    
    main Function:
    
    Tree Construction: Constructs a binary tree with the given structure.
    Traversal Vectors: Initializes vectors to store the results of in-order, pre-order, and post-order traversals.
    Traversal Execution: Calls allInOneTraversal to fill the vectors with the respective traversal orders.
    
    Printing Results: Prints the contents of the inOrder, preOrder, and postOrder vectors.
*/