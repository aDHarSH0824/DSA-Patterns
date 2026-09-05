class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        while(k--){
            int m = grid.size();
            int n = grid[0].size();
            int ans = grid[0][0];
            grid[0][0] = grid[m-1][n-1];
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(i==0 && j==0) continue;
                    int val = grid[i][j];
                    grid[i][j]=ans;
                    ans = val;
                }
            }
        }
        return grid;
    }
};