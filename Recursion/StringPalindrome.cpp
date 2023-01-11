#include<iostream>
using namespace std;
bool solve(string s,int i ,int n){
    if(i>=n/2){
        return true;
    }

    if(s[i] != s[n-i-1]){
        return false;
    }

    return solve(s,i+1,n);
}
int main(){
    string s = "MADAM";
    int n=s.size();
    cout<<solve(s,0,n)<<endl;
    return 0;
}