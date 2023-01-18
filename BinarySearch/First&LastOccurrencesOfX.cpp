// Problem Link : https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1

void first(int arr[], int n , int x, vector<int>& ans){
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
    ans.push_back(firstOccurance);
}

void last(int arr[], int n , int x, vector<int>& ans){
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
    ans.push_back(lastOccurance);
}
vector<int> find(int arr[], int n , int x )
{
    vector<int> ans;
    
    first(arr,n,x,ans);
    last(arr,n,x,ans);
    
    return ans;
}