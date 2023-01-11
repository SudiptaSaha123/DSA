#include<iostream>
using namespace std;
void solve(int i, int n){
    if(i>n){
        return;
    }
    solve(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    solve(1,n);
}