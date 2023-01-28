// Problem Link : https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1

class Solution
{
    public:
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        int i = 0;
        int j = m-1;
        
        while((i>=0 && i<n) && (j>=0 && j<m)){
            if(matrix[i][j] == x){
                return 1;
            }
            else if(x > matrix[i][j]){
                i++;
            }
            else if(x < matrix[i][j]){
                j--;
            }
        }
        return 0;
    }
};