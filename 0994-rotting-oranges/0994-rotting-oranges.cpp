class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        int fresh = 0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    vis[i][j]=2;
                }else if(grid[i][j]==1) fresh++;
            }
        }
        vector<int> x = {-1,1,0,0};
        vector<int> y = {0,0,-1,1};
        int time = 0;
        while(!q.empty() && fresh>0){
            time++;
            int s = q.size();
            while(s--){
                int r = q.front().first;
                int c = q.front().second;
                q.pop();
                for(int k=0;k<4;k++){
                    int nr= r+x[k];
                    int nc= c+y[k];
                    if(nr>=0 && nc>=0 && nr<n && nc<m && vis[nr][nc]==0 && grid[nr][nc]==1){
                        q.push({nr,nc});
                        fresh--;
                        vis[nr][nc]=2;
                    }
                }
            }
        }
        if(fresh>0) return -1;
        return time;
    }
};