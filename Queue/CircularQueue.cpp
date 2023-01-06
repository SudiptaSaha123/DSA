// Problem Link : https://www.codingninjas.com/codestudio/problems/circular-queue_1170058

#include <bits/stdc++.h> 
class CircularQueue{
    public:
    int* arr;
    int size;
    int qfront;
    int qrear;
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        qfront = -1;
        qrear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        if((qfront == 0 && qrear == size-1) || (qrear == (qfront-1)%(size-1))){
            return false;
        }
        
        else if(qfront == -1){
            qfront = qrear = 0;
        }
        
        else if(qrear == size-1 && qfront != 0){
            qrear = 0;
        }
        
        else{
            qrear++;
        }
        
        arr[qrear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(qfront == -1){
            return -1;
        }
        
        int ans = arr[qfront];
        arr[qfront] = -1;
        
        if(qfront == qrear){
            qfront = qrear = -1;
        }
        
        else if(qfront == size-1){
            qfront = 0;
        }
        
        else{
            qfront++;
        }
        return ans;
    }
};