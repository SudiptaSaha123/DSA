#include<iostream>
using namespace std;
void solve(int n,int ans){
    if(n<1){
        cout<<ans<<endl;
        return;
    }
    solve(n-1,ans+n);
}
int main(){
    int n;
    cin>>n;
    int ans=0;
    solve(n,ans);
    return 0;
}