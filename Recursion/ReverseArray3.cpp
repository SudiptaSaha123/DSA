#include<iostream>
using namespace std;
void solve(int start,int n,int arr[]){
    if(start>=n){
        return;
    }
    swap(arr[start],arr[n]);
    solve(start+1,n-1,arr);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    solve(i,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}