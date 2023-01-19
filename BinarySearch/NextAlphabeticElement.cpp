#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int start = 0;
    int end = n-1;
    int mid;
    char ans = '#';

    char target;
    cin>>target;

    while(start <= end){

        mid = start + (end - start)/2;
        if(arr[mid] == target){
            start = mid + 1;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else if(arr[mid] > target){
            ans = arr[mid];
            end = mid - 1;
        }
    }

    cout <<ans<<endl;
    return 0;
}