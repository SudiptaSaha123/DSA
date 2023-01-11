#include<iostream>
using namespace std;
void solve(int n){
    //Base Case
    if(n<1){
        return;
    }

    solve(n-1);

    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    solve(n);
    return 0;
}