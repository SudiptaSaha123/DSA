#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.pop();
    int a=s.top();
    cout<<"Top Element is "<<a<<endl;
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }
    int size=s.size();
    cout<<"Size of the stack is "<<size<<endl;
    s.pop();
    s.pop();
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }    
    return 0;
}