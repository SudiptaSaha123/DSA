// 236. Lowest Common Ancestor of a Binary Tree

// Problem Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/description/

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL){
            return root;
        }

        if(root == p || root == q){
            return root;
        }

        TreeNode* LCA1 = lowestCommonAncestor(root->left,p , q);
        TreeNode* LCA2 = lowestCommonAncestor(root->right,p , q);

        if(LCA1!= NULL && LCA2 != NULL){
            return root;
        }

        if(LCA1 != NULL){
            return LCA1;
        }else{
            return LCA2;
        }
    }
};