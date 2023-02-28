// 997. Find the Town Judge

// Problem Link: https://leetcode.com/problems/find-the-town-judge/description/

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>data(n+1,0);
        for(auto x : trust){
            int outdegree = x[0];
            int indegree = x[1];
            data[outdegree]--;
            data[indegree]++;
        }

        for(int i=1;i<=n;i++){
            if(data[i] == n-1){
                return i;
            }
        }
        return -1;
    }
};