class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ones = 0;
        queue<pair<int,int>> q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1) ones++;
                else if(grid[i][j]==2){
                    q.push({i,j});
                    grid[i][j]=-1;
                }
            }
        }
        vector<int> x = {-1,1,0,0};
        vector<int> y = {0,0,-1,1};
        int time = 0;
        while(!q.empty() && ones>0){
            time++;
            int s = q.size();
            while(s--){
                pair<int,int> p = q.front();
                q.pop();
                for(int k=0;k<4;k++){
                    int row = p.first+x[k];
                    int col = p.second+y[k];
                    if(row>=0 && col>=0 && row<n && col<m && grid[row][col]==1){
                        grid[row][col]=-1;
                        q.push({row,col});
                        ones--;
                    }
                }
            }
        }
        if(ones>0) return -1;
        return time;
    }
};