// 496. Next Greater Element I

// Problem Link : https://leetcode.com/problems/next-greater-element-i/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int>umap;
       stack<int>st;
        int n = nums2.size();
       for(int i = n-1; i>=0; i--){
            int elem = nums2[i];

            while(!st.empty() && st.top()<=elem){
                st.pop();
            }

            int res = st.empty() ? -1 : st.top();

            st.push(elem);

            umap.insert({elem,res});
        }

        vector<int> ans;

        for(auto x: nums1){
            ans.push_back(umap[x]);
        }

        return ans;
    }
};