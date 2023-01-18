// Problem Link : https://practice.geeksforgeeks.org/problems/vertical-width-of-a-binary-tree/1

unordered_set<int> st;

void inorderUtil(Node* root, int hd){
    if(root != NULL){
        inorderUtil(root -> left, hd-1);
        st.insert(hd);
        inorderUtil(root -> right, hd+1);
    }
}
int verticalWidth(Node* root)
{

    st.clear();
    inorderUtil(root,0);
    
    return st.size();
}