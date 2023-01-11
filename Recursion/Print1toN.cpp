#include<iostream>
using namespace std;
void print(int start, int n){

    //Base Case

    if(start>n){
        return;
    }

    cout<<start<<endl;

    start++;

    print(start,n);
}
int main(){

    int n;
    cin>>n;
    cout<<endl;
    print(1,n);
}