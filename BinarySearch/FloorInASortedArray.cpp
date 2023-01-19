// Problem Link : https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1

class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
    int start = 0;
    int end = v.size() - 1;
    
    int mid;
    int ans = -1;
    while(start <= end){
        mid = start + (end - start)/2;
        
        if(v[mid] == x){
            return mid;
        }
        else if(v[mid] < x){
            ans = mid;
            start = mid + 1;
        }
        else if(v[mid] > x){
            end = mid - 1;
        }
    }
    return ans;
    }
};