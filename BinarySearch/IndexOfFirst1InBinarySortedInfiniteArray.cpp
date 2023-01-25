#include<iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int key){
    int mid;
    int ans = -1;

    while(start <= end){
        mid = start + (end-start)/2;
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid -1;
        }
    }

    return ans;
}
int main(){
    int arr[100] = {0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int start = 0;
    int end = 1;

    int key;
    cin>>key;

    while(arr[end] < key){
        start = end;
        end = end * 2;
    }

    int index = binarySearch(arr, start, end, key);
    cout<<index<<endl;
    return 0;
}