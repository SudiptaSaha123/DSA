// Problem Link : https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1


queue<int> modifyQueue(queue<int> q, int k) {

    stack<int> s;
    
    for(int i=0;i<k;i++){
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);
    }
    
    int index = q.size() - k;
    
    while(index--){
        int val = q.front();
        q.pop();
        q.push(val);
    }

    return q;
    
}