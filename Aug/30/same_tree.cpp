/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //dono hee null hai toh same hee h ek tarike se :)
        if(p == nullptr && q == nullptr)    return true;
        //agr koi ek bhi null hua yaaaaaaa values diff hui toh false return krdo :(
        if( p == nullptr || q == nullptr || q->val != p->val)   return false;
        // recursion laga ke fir bool mardo :)
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};