#include<iostream>
using namespace std;

class Stack{
    public:
    int size;
    int *arr;
    int top;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data){
        if(top<size){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    
};
int main(){

    Stack s1(5);

    s1.push(13);
    s1.push(3);
    s1.push(4);
    s1.push(22);
    s1.push(19);

    cout<<s1.peek()<<endl;

    s1.pop();

    cout<<s1.peek()<<endl;

    s1.pop();

    cout<<s1.peek()<<endl;

    if(s1.isEmpty()) {
        cout<< "Stack is Empty"<< endl;
    }
    else{
        cout<< "Stack is not Empty"<< endl;
    }

    s1.push(23);
    s1.push(42);
    s1.push(27);
    s1.push(32);
    return 0;
}