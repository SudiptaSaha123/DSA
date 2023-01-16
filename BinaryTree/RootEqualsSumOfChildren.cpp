// 2236. Root Equals Sum of Children

// Problem Link : https://leetcode.com/problems/root-equals-sum-of-children/description/

class Solution {
public:
    bool checkTree(TreeNode* root) {
       int left = root -> left ->val;
       int right = root -> right -> val;

       int rootVal = root -> val;

       if(rootVal == left+right){
           return true;
       }else{
           return false;
       }
    }
};