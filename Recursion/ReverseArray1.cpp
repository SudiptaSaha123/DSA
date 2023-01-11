#include<iostream>
using namespace std;
void solve(int start,int n,int arr[]){
    if(start>=n/2){
        return;
    }

    swap(arr[start], arr[n-start-1]);

    solve(start+1,n,arr);
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
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}