#include<iostream>
using namespace std;

void fact(int n,int ans){
    if(n==1){
        cout<<ans<<endl;
        return;
    }

    fact(n-1,ans*n);
}
int main(){
    int n;
    int ans=1;
    cin>>n;

    fact(n,ans);
    return 0;
}