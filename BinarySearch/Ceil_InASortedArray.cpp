#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;

    int start = 0;
    int end = n-1;

    int mid;
    int ans = -1;
    while(start <= end){
        mid = start + (end - start)/2;

        if(arr[mid] == x){
            cout<<mid<<endl;
            break;
        }

        if(arr[mid]>x){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid]<x){
            start = mid + 1;
        }

    }
    
    cout<<ans<<endl;

    return 0;
}