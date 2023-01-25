#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    int start = 0;
    int end = n-1;

    int mid;

    while(start <= end){
        mid = start + (end-start)/2;

        if(arr[mid] == key){
            cout<<key<<endl;
            break;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
    }

    int startDiff = abs(key - arr[start]);
    int endDiff = abs(key - arr[end]);

    if(arr[mid] == key){
        cout<<arr[mid]<<endl;
    }
    else if(startDiff < endDiff){
        cout<<arr[start]<<endl;
    }else{
        cout<<arr[end]<<endl;
    }
    return 0;
}