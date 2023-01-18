// 105. Construct Binary Tree from Preorder and Inorder Traversal

// Problem Link : https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/

class Solution {
public:
    int preIndex = 0;

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int is, int ie){
        if(is > ie){
            return NULL;
        }

        TreeNode* root = new TreeNode(preorder[preIndex]);
        preIndex++;

        int inIndex;
        for(int i=is;i<ie;i++){
            if(root -> val == inorder[i]){
                inIndex = i;
                break;
            }
        }

        root -> left = solve(preorder, inorder, is, inIndex-1);
        root -> right = solve(preorder, inorder, inIndex+1, ie);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* ans = solve(preorder, inorder, 0, inorder.size()-1);
        return ans;
    }
};