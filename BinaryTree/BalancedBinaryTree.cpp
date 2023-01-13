// 110. Balanced Binary Tree

// Problem Link : https://leetcode.com/problems/balanced-binary-tree/description/

class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        int left = height(root -> left);
        int right = height(root -> right);

        int ans = max(left,right) + 1;
        return ans;
    }

    void inorder(TreeNode* root, bool &balanced){
        if(root != NULL){
            inorder(root -> left,balanced);

            int lh = height(root->left);
            int rh = height(root->right);

            int ans = abs(lh-rh);
            if(ans>1){
                balanced = false;
            }
            inorder(root -> right,balanced);
        }
    }
    bool isBalanced(TreeNode* root) {
        bool balanced = true;
        inorder(root, balanced);
        return balanced;
    }
};