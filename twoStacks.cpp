// Problem Link : https://www.codingninjas.com/codestudio/problems/two-stacks_983634

#include <bits/stdc++.h> 
class TwoStack {
public:

    int *arr;
    int size;
    int top1;
    int top2;
    
    TwoStack(int s) {
        this -> size = s;
        arr=new int[s];
        top1 = -1;
        top2 = s;
    }
    
    void push1(int num) {
    if(top2-top1>1){
        top1++;
        arr[top1]=num;
    }
    }

    void push2(int num) {
    if(top2-top1>1){
        top2--;
        arr[top2]=num;
    }
    }

    int pop1() {
    if(top1>=0){
        int ans=arr[top1];
        top1--;
        return ans;
    }else{
        return -1;
    }
    }

    int pop2() {
    if(top2<size){
        int ans=arr[top2];
        top2++;
        return ans;
    }else{
        return -1;
    }
    }
};
