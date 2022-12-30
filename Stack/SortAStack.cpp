// Problem Link : https://www.codingninjas.com/codestudio/problems/sort-a-stack_985275

#include <bits/stdc++.h> 
void sortInsert(stack<int> &s, int x){
    
    //base case
    if(s.empty() || (!s.empty() && s.top()<x)){
        s.push(x);
        return;
    }
    
    int num = s.top();
    s.pop();
    
    //recursive call
    sortInsert(s,x);
    
    s.push(num);
    
}
void sortStack(stack<int> &stack)
{
    //base case
    if(stack.empty()){
        return;
    }
    
    int num = stack.top();
    stack.pop();
    
    //recursive call
    sortStack(stack);
    
    sortInsert(stack,num);
}