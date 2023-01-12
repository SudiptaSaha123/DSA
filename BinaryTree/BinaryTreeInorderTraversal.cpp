// 94. Binary Tree Inorder Traversal

// Problem Link : https://leetcode.com/problems/binary-tree-inorder-traversal/description/

class Solution {
public:
    void solve(vector<int> &ans, TreeNode* root){
        if(root == NULL){
            return;
        }

        solve(ans, root->left);
        ans.push_back(root -> val);
        solve(ans, root -> right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        solve(ans,root);
        return ans;
    }
};