// 111. Minimum Depth of Binary Tree

// Problem Link : https://leetcode.com/problems/minimum-depth-of-binary-tree/description/

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }

        int lh = minDepth(root -> left);
        int rh = minDepth(root -> right);

        int ans =0;
        if(lh == 0){
            ans = rh+1;
        }else if(rh == 0){
            ans = lh +1;
        }else{
            ans = min(lh,rh)+1;
        }
        return ans;
    }
};