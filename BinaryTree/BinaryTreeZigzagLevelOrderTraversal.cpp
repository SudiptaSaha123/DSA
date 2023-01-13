// 103. Binary Tree Zigzag Level Order Traversal

// Problem Link : https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/


class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        if(root == NULL){
            return ans;
        }
        while(1){
            int size = q.size();
            if(size == 0){
                return ans;
            }
            level++;
            vector<int>data;

            while(size>0){
                TreeNode* temp = q.front();
                data.push_back(temp -> val);
                q.pop();
                if(temp -> left){
                    q.push(temp -> left);
                }

                if(temp -> right){
                    q.push(temp -> right);
                }
                size--;
            }
            if(level % 2 == 0){
                reverse(data.begin(), data.end());
            }
            ans.push_back(data);
        }
        
        return ans;

    }
};

