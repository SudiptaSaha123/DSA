// 144. Binary Tree Preorder Traversal
// Problem Link : https://leetcode.com/problems/binary-tree-preorder-traversal/description/

class Solution {
public:
    void solve(vector<int>&ans, TreeNode* root){
        if(root == NULL){
            return;
        }

        ans.push_back(root->val);
        solve(ans, root -> left);
        solve(ans, root -> right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        solve(ans,root);
        return ans;
    }
};

