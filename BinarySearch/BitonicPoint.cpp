// Problem Link : https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1

class Solution{
public:
    int peak(int arr[], int n){
        int start = 0;
        int end = n-1;
        
        int mid;
        
        while(start <= end){
            
            mid = start + (end - start)/2;
            
            if(mid > 0 && mid < n){
                if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
                    return arr[mid];
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
                    return arr[0];
                }else{
                    return arr[1];
                }
            }
            else if(mid == n-1){
                if(arr[n-1] > arr[n-2]){
                    return arr[n-1];
                }else{
                    return arr[n-2];
                }
            }
	    }   
	    return {};
    }
	
	int findMaximum(int arr[], int n) {
	    if(arr[n-1] > arr[n-2]){
	        return arr[n-1];
	    }
        int pivot = peak(arr, n);
        return pivot;
    }
};