// Problem Link : https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1  
   
vector<int> leftView(Node *root)
{
    vector<int> ans;
    queue<Node*> q;
    q.push(root);
    if(root == NULL){
        return ans;
    }
    while(1){
        int size = q.size();
        if(size==0){
            return ans;
        }
        int val = 0;
        int done = 1;
        while(size>0){
            Node* temp= q.front();
            q.pop();
            if(done ==1){
                val = temp -> data;
                done++;
            }
                
            if(temp -> left){
                q.push(temp->left);
            }

            if(temp -> right){
                q.push(temp->right);
            }

            size--;
        }
        ans.push_back(val);
    }
    return ans;
}