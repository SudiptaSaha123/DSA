#include<iostream>
#include<stack>
using namespace std;
int main(){

    string s;
    cin>>s;

    stack<char>temp;

    for(int i=0;i<s.length();i++){
        temp.push(s[i]);
    }

    string ans="";

    while(!temp.empty()){
        ans.push_back(temp.top());
        temp.pop();
    }
    cout<<ans<<endl;
    return 0;
}