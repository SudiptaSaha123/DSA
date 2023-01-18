// Problem Link : https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1

class Solution{
public:	
int first(int arr[], int n , int x){
    int firstOccurance = -1;

    int s = 0;
    int e = n-1;
    
    while(s<=e){
        int mid = s + (e-s)/2;
        
        if(x == arr[mid]){
            firstOccurance = mid;
            e = mid - 1;
        }
        else if(x > arr[mid]){
            s = mid+1;
        }else{
            e = mid -1;
        }
    }
    return firstOccurance;
}

int last(int arr[], int n , int x){
    int lastOccurance = -1;

    int s = 0;
    int e = n-1;
    
    while(s<=e){
        int mid = s + (e-s)/2;
        
        if(x == arr[mid]){
            lastOccurance = mid;
            s = mid + 1;
        }
        else if(x > arr[mid]){
            s = mid+1;
        }else{
            e = mid -1;
        }
    }
    return lastOccurance;
}

	int count(int arr[], int n, int x) {

        int firstIndex = first(arr,n,x);
        int lastIndex = last(arr,n,x);
        if(firstIndex == -1 && lastIndex == -1){
            return 0;
        }
        else{
            return lastIndex - firstIndex + 1;
        }
	}
};