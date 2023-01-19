// 33. Search in Rotated Sorted Array

// Problem Link : https://leetcode.com/problems/search-in-rotated-sorted-array/description/

class Solution {
public:
    int solve(vector<int>& nums){
        int start = 0;
        int end = nums.size()-1;

        int mid;
        int prev,next;

        while(start <= end){
            
            if(nums[start] < nums[end]){
                return start;
            }

            mid = start + (end-start)/2;
            prev = (mid - 1 + nums.size()) % nums.size();
            next = (mid + 1) % nums.size();

            if(nums[mid] <= nums[next] && nums[mid] <= nums[prev]){
                return mid;
            }
            else if(nums[start] <= nums[mid]){
                start = mid + 1;
            }
            else if(nums[mid] <= nums[end]){
                end = mid - 1;
            }
        }
        return mid;
    }

    int binarySearch(vector<int>& nums, int start, int end, int target){
        while(start <= end){
            int mid = start + (end - start)/2;

            if(nums[mid] == target){
                return mid;
            }
            else if (target < nums[mid]){
                end = mid - 1;
            }
            else{
                start = mid+1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int index = solve(nums);

        if(nums[index] == target){
            return index;
        }
        int left = binarySearch(nums, 0, index-1, target);
        int right = binarySearch(nums, index+1, nums.size()-1, target);

        int ans;

        if(left == -1 && right == -1){
            ans = -1;
        }
        if(left != -1){
            ans = left;
        }
        else if(right != -1){
            ans = right;
        }

        return ans;
    }
};