// 2535. Difference Between Element Sum and Digit Sum of an Array

// Problem Link : https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/


class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elemSum=0;
        int digitSum=0;
        for(int i=0;i<nums.size();i++){
            elemSum+=nums[i];
        }

        for(int i=0;i<nums.size();i++){
            int elem = nums[i];
            while(elem>0){
                int digit = elem%10;
                digitSum+=digit;
                elem=elem/10;
            }
        }

        int ans = abs(elemSum-digitSum);
        return ans;
    }
};