// Problem Link : https://practice.geeksforgeeks.org/problems/level-order-traversal/1

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
        vector<int> ans;
        if(node==NULL){
            return ans;
        }
        
        queue<Node*> q;
        q.push(node);
        
        while(!q.empty()){
            Node* temp = q.front();
            ans.push_back(temp->data);
            
            q.pop();
            
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        return ans;
    }
};