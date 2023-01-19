#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;

    int mid;

    while(start <= end){

        mid = start + (end-start)/2;
        if(key == arr[mid]){
            return mid;
        }

        if(mid + 1 <= end){
            if(arr[mid+1] == key){
                return mid+1;
            }
        }

        if(mid - 1 >= start){
            if(arr[mid-1] == key){
                return mid-1;
            }
        }

        if(key < arr[mid]){
            end = mid - 2;
        }
        else if(key > arr[mid]){
            start = mid + 2;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;
    int index = binarySearch(arr, n, key);
    cout<<index<<endl;
    return 0;
}