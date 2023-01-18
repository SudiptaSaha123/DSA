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

    int s = 0;
    int e = n-1;
    bool found = false;
    while(s<=e){

        int mid = s+(e-s)/2;
        if(key == arr[mid]){
            cout<<mid<<endl;
            found = true;
            break;
        }
        else if(key < arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    if(found == false){
        cout<<-1<<endl;
    }
    return 0;
}