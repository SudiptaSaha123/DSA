#include<iostream>
using namespace std;

void print(int start, int n){
    //Base Case
    if(start>n){
        return;
    }
    
    cout<<"My Name"<<endl;

    // start++;

    print(start+1,n);
}
int main(){

    int n;
    cin>>n;

    print(1,n);
}