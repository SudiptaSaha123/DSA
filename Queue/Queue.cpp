#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;

    q.push(4);
    q.push(3);
    q.push(14);

    cout<<"Size of Queue is "<<q.size()<<endl;
    cout<<"Front of Queue is "<<q.front()<<endl;

    q.pop();

    cout<<"Size of Queue is "<<q.size()<<endl;
    cout<<"Front of Queue is "<<q.front()<<endl;

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }

    q.pop();
    q.pop();

    cout<<"Size of Queue is "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }
    return 0;
}