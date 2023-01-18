#include<iostream>
using namespace std;
int solve(int arr[], int n, int key){
    if(n == 1){
        if(arr[0] == key){
            return 0;
        }else{
            return -1;
        }
    }

    if(arr[0]<arr[1]){
        int s = 0;
        int e = n-1;
        while(s<=e){
            
            int mid = s+(e-s)/2;
            
            if(key == arr[mid]){
                return mid;
            }
            else if(key < arr[mid]){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return -1;
    }
    if(arr[0]>arr[1]){
        int s = 0;
        int e = n-1;
        while(s<=e){
            
            int mid = s+(e-s)/2;
            
            if(key == arr[mid]){
                return mid;
            }
            else if(key < arr[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return -1;       
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int ans = solve(arr,n,key);
    cout<<ans<<endl;
    return 0;
}