// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */

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

        void dreamgirl(TreeNode* root, int level, vector<int>&srijan){
            if(root == nullptr) return;
            if(srijan.size() == level)  srijan.push_back(root->val);

            if(root->right != NULL) dreamgirl(root->right, level+1, srijan);
            if(root->left != NULL) dreamgirl(root->left,level+1, srijan);
        }

        vector<int> rightSideView(TreeNode* root) {
            vector<int>srijan;
            if(root == nullptr) return srijan;
            dreamgirl(root,0,srijan);
            return srijan;
        }
    };


// class Solution {
// public:
//     vector<int> rightSideView(TreeNode* root) {
//         if(root == NULL)    return{};
//         vector<int>ans;
//         queue<TreeNode*>q;
//         q.push(root);
//         while(!q.empty()){
//        int size = q.size();
//        for(int i=0; i<size; i++){
//            TreeNode* value = q.front();
//            q.pop();
//            if(i == size - 1)   ans.push_back(value->val);
           
//            if(value->left)  q.push(value->left);
//            if(value->right) q.push(value->right);
//        }
//    }
//    return ans;
//     }
// };