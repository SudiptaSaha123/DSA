// 1209. Remove All Adjacent Duplicates in String II

// Problem Link : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/description/

class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>> v;

        for(auto ch: s){
            if(v.size() == 0 || v.back().first != ch){
                v.push_back({ch,1});
            }
            else{
                v.back().second++;
            }

            if(v.back().second == k){
                v.pop_back();
            }
        }

        string ans;

        for(auto x:v){
            ans.append(x.second, x.first);
        }

        return ans;        
    }
};