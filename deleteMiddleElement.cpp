// Problem Link : https://www.codingninjas.com/codestudio/problems/delete-middle-element-from-stack_985246

#include <bits/stdc++.h> 
void solve(stack<int>&inputStack, int count, int N){
    //base case
    if(count==N/2){
        inputStack.pop();
        return;
    }
    
    int num = inputStack.top();
    inputStack.pop();
    
    solve(inputStack,count+1,N);
    inputStack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){

    int count=0;
    solve(inputStack,count,N);
}