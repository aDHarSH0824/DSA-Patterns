class Solution {
public:
    void dfs(vector<vector<int>> adj,int index,vector<int>& vis){
        if(vis[index]==0) vis[index]=1;
        for(int i=0;i<adj[index].size();i++){
            int src = adj[index][i];
            if(!vis[src]) dfs(adj,src,vis);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<vector<int>> adj(isConnected.size());
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected[i].size();j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int> vis(isConnected.size(),0);
        int res = 0;
        for(int i=0;i<adj.size();i++){
            if(vis[i]==0){
                dfs(adj,i,vis);
                res++;
            }
        }
        return res;
    }
};