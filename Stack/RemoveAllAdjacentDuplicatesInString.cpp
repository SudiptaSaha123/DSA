// 1047. Remove All Adjacent Duplicates In String

// Problem Link : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;

        for(int i=0 ; i<s.length(); i++){
            if(st.empty() || st.top() != s[i]){
                st.push(s[i]);
            }else{
                st.pop();
            }
        }

        string ans = "";

        while(!st.empty()){
            char ch = st.top();
            ans += ch;
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};