// 404. Sum of Left Leaves

// Problem Link : https://leetcode.com/problems/sum-of-left-leaves/description/

class Solution {
public:
    void solve(int &ans, TreeNode* root,bool flag){
        if(root == NULL){
            return;
        }

        solve(ans, root -> left, true);
        solve(ans, root ->right, false);

        if(root -> left == NULL && root ->right == NULL && flag){
            ans += root -> val;
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans=0;
        bool flag;
        solve(ans,root,flag);
        return ans;
    }
};