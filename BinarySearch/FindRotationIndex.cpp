// Problem Link : https://practice.geeksforgeeks.org/problems/rotation4723/1

class Solution{
public:	
	int findKRotation(int arr[], int n) {
        int prev;
        int next;
        int mid;
        
        int start = 0;
        int end = n-1;
        
            
        while(start <= end){
            
            if(arr[start] <= arr[end]){
                return start;
            }          
            
            mid = start + (end-start)/2;
            prev = (mid+n-1) % n;
            next = (mid+1) % n;
            
            if(arr[mid] <= arr[next] && arr[mid] <= arr[prev] ){
                return mid;
            }
            
            else if(arr[start] <= arr[mid]){
                start = mid+1;
            }
            else if(arr[mid] <= arr[end]){
                end = mid-1;
            }
        }
        
        return 0;
	}

};