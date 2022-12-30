// Problem Link : https://www.codingninjas.com/codestudio/problems/reverse-stack-using-recursion_631875

void insertAtbottom(stack<int> &stack, int x){
    if(stack.empty()){
        stack.push(x);
        return;
    }
    
    int num = stack.top();
    stack.pop();
    
    insertAtbottom(stack,x);
    
    stack.push(num);
}
void reverseStack(stack<int> &stack) {
    //base case
    if(stack.empty()){
        return;
    }
    
    int num = stack.top();
    stack.pop();
    
    reverseStack(stack);
    
    insertAtbottom(stack, num);
}