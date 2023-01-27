#include<iostream>
using namespace std;

int peak(int arr[], int n){
    int start = 0;
    int end = n-1;

    if(n == 1){
        return 0;
    }

    int mid;

    while(start <= end){
        mid = start + (end - start)/2;

        if(mid > 0 && mid < end){
            if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
                return mid;
            }
            else if(arr[mid+1] > arr[mid]){
                start = mid + 1;
            }
            else if(arr[mid-1] > arr[mid]){
                end = mid - 1;
            }
        }

        else if(mid == 0){
            if(arr[0] > arr[1]){
                return 0;
            }else{
                return 1;
            }
        }

        else if(mid == n-1){
            if(arr[n-1] > arr[n-2]){
                return n-1;
            }else{
                return n-2;
            }
        }
    }
    return mid;
}

int incsolve(int arr[], int size, int start, int end, int key){
    if(size == 1){
        if(arr[0] == key){
            return 0;
        }else{
            return -1;
        }
    }

    if(arr[0] < arr[1]){
        int s = start;
        int e = end;
        int mid;
        while(s<=e){
            
            mid = s+(e-s)/2;
            
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
}

int decsolve(int arr[], int size, int start, int end, int key){
    if(size == 1){
        if(arr[0] == key){
            return 0;
        }else{
            return -1;
        }
    }

    if(arr[0] < arr[1]){
        int s = start;
        int e = end;
        int mid;
        while(s<=e){
            
            mid = s+(e-s)/2;
            
            if(key == arr[mid]){
                return mid;
            }
            else if(key > arr[mid]){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return -1;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    int index = peak(arr,n);
    int ans;
    // if(arr[index] == key){
    //     ans = index;
    // }

    int left = incsolve(arr, n, 0, index, key);
    int right = decsolve(arr, n, index+1, n-1, key);

    if(left == -1 && right == -1){
        ans = -1;
    }
    else if(left != -1 && right == -1){
        ans = left;
    }
    else{
        ans = right;
    }

    cout<<ans<<endl;
    return 0;
}