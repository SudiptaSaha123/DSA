Problem Link : https://www.codingninjas.com/codestudio/problems/queue-using-array-or-singly-linked-list_2099908

#include <bits/stdc++.h> 
class Queue {
public:
    int* arr;
    int size;
    int qfront;
    int qrear;
    Queue() {
        size = 10001;
        arr = new int[size];
        qfront = 0;
        qrear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront == qrear){
            return true;
        }else{
            return false;
        }
    }

    void enqueue(int data) {
        if(qrear == size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[qrear] = data;
            qrear++;
        }
    }

    int dequeue() {
        if(qfront == qrear){
            return -1;
        }else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == qrear){
                qfront = 0;
                qrear = 0;
            }
            return ans;
        }
    }

    int front() {
        if(qfront == qrear){
            return -1;
        }else{
            return arr[qfront];
        }
    }
};