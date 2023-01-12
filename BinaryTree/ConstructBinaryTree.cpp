#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* constructTree(node* root){
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter the data to be inserted in the left of the "<<data<<" "<<endl;

    root -> left = constructTree(root -> left);

    cout<<"Enter the data to be inserted in the right of the "<<data<<" "<<endl;

    root -> right = constructTree(root -> right);

    return root;
}
int main(){
    node* root = NULL;
    root = constructTree(root);
    return 0;
}