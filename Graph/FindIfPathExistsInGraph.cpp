// 1971. Find if Path Exists in Graph

// Problem Link : https://leetcode.com/problems/find-if-path-exists-in-graph/description/

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>>umap;
        for(auto x : edges){
            vector<int> temp = x;

            int u = temp[0];
            int v = temp[1];

            umap[u].push_back(v);
            umap[v].push_back(u);
        }  

        vector<bool> visited(n+1, false);
        queue<int>q;
        q.push(source);
        visited[source] = true;

        while(!q.empty()){
            int v = q.front();
            q.pop();

            vector<int> temp = umap[v];
            for(int i=0;i<temp.size();i++){
                int vertex = temp[i];
                if(visited[vertex] == false){
                    visited[vertex] = true;
                    q.push(vertex);
                }
            }
        }    
        if(visited[destination] == true){
            return true;
        }
        return false;  
    }
};