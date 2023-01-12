// Problem Link : https://practice.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1

void solve(int &res, Node* root){
    if(root == NULL){
        return;
    }
    
    solve(res, root->left);
    
    solve(res, root->right);
    
    if(root->left == NULL && root->right == NULL){
        res++;
    }
}
int countLeaves(Node* root)
{

    int res=0;
    solve(res,root);
    return res;
}