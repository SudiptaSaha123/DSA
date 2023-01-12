// 145. Binary Tree Postorder Traversal

// Problem Link : https://leetcode.com/problems/binary-tree-postorder-traversal/description/

class Solution {
public:
    void solve(vector<int> &ans, TreeNode* root){
        if(root == NULL){
            return;
        }

        solve(ans, root->left);
        solve(ans, root -> right);
        ans.push_back(root -> val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        solve(ans,root);
        return ans;        
    }
};