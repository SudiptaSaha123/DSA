// 1431. Kids With the Greatest Number of Candies

// Problem Link : https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;

        int maxi = INT_MIN;
        for(int i=0;i<candies.size();i++){
            maxi = max(maxi, candies[i]);
        }

        for(int i=0;i<candies.size();i++){
            if(candies[i] + extraCandies >= maxi){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};