// 20. Valid Parentheses

// Problem Link : https://leetcode.com/problems/valid-parentheses/description/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0;i<s.length();i++){
            if(st.empty() || s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else if(st.top() == '(' && s[i] == ')' ||
                    st.top() == '{' && s[i] == '}' ||
                    st.top() == '[' && s[i] == ']'){
                        
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }

        if(st.empty()){
            return true;
        }else{
            return false;
        }
    }
};