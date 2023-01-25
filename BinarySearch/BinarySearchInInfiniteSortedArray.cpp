#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key){
    int mid;

    while(start <= end){
        mid = start +(end-start)/2;

        if(arr[mid] == key){
            return mid;
        }else if(key > arr[mid]){
            start = mid +1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr [100] = {2, 4 , 7 , 16, 20, 28, 52, 67};
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