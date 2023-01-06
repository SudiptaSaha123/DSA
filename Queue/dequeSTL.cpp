#include<iostream>
#include<queue>
using namespace std;
int main(){
    deque<int> d;

    d.push_front(4);
    d.push_back(6);

    cout<<"Front is "<<d.front()<<endl;
    cout<<"Back is "<<d.back()<<endl;

    d.pop_front();

    cout<<"Front is "<<d.front()<<endl;
    cout<<"Back is "<<d.back()<<endl;

    if(d.empty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }
}