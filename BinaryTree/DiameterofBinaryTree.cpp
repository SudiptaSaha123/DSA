// 543. Diameter of Binary Tree

// Problem Link : https://leetcode.com/problems/diameter-of-binary-tree/description/

class Solution {
public:
    int diameter = 0;
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        int lh = height(root -> left);
        int rh = height(root ->right);

        diameter = max(diameter, lh + rh + 1);
        int ans = max(lh,rh)+1;
        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int data = height(root);
        return diameter-1;
    }
};
