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
    int akansh(TreeNode* bhaiya, bool& ans){
        if(bhaiya == nullptr)   return 0;
        int laila = akansh(bhaiya->left, ans);
        int majnu = akansh(bhaiya->right, ans);
        
        if(abs(laila - majnu) > 1)  ans = false;
        return max(laila+1, majnu+1);
    }

    bool isBalanced(TreeNode* root) {
        bool ans = true;
        akansh(root,ans);
        return ans;
    }
};