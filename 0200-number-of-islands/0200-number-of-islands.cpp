class Solution {
public:
    bool isValid(int i,int j,int n,int m){
        if(i<0 || i>=n || j<0 || j>=m) return false;
        return true;
    }
    void dfs(vector<vector<char>>& grid,int i,int j,int n,int m,vector<vector<int>>& vis,vector<int>& x,vector<int>& y){
        vis[i][j] = 1;
        for(int k=0;k<4;k++){
            int row = i+x[k];
            int col = j+y[k];
            if(isValid(row,col,n,m) && grid[row][col]=='1' && vis[row][col]==0){
                dfs(grid,row,col,n,m,vis,x,y);
            }
        }
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int res = 0;
        vector<int> x = {-1,1,0,0};
        vector<int> y = {0,0,-1,1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isValid(i,j,n,m) && grid[i][j]=='1' && vis[i][j]==0){
                    dfs(grid,i,j,n,m,vis,x,y);
                    res++;
                }
            }
        }  
        return res;
    }
};