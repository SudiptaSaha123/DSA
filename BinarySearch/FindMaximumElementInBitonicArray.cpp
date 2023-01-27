class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int mid;
        if(nums.size() == 1){
            return 0;
        }
        while(start <= end){
            mid = start + (end - start)/2;

            if(mid > 0 && mid < nums.size()-1){
                if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
                    return mid;
                }
                else if(nums[mid + 1] > nums[mid]){
                    start = mid + 1;
                }
                else if(nums[mid - 1] > nums[mid]){
                    end = mid - 1;
                }
            }
            else if(mid == 0){
                if(nums[0]>nums[1]){
                    return 0;
                }else{
                    return 1;
                }
            }
            else if(mid == nums.size()-1){
                if(nums[nums.size()-1]>nums[nums.size()-2]){
                    return nums.size()-1;
                }else{
                    return nums.size()-2;
                }
            }
        }
        return {};
    }
};