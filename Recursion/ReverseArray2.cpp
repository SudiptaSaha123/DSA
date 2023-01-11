#include<iostream>
using namespace std;
void solve(int start,int n,int arr[]){
    if(start==n){
        return;
    }

    solve(start+1,n,arr);

    cout<<arr[start]<<" ";
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    solve(i,n,arr);
    cout<<endl;
}