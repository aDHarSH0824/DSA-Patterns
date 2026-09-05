class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,int index,vector<int>& vis){
        if(vis[index]==0) vis[index]=1;
        for(int i=0;i<isConnected[index].size();i++){
            if(isConnected[index][i]==1 && !vis[i]) dfs(isConnected,i,vis);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> vis(isConnected.size(),0);
        int res = 0;
        for(int i=0;i<isConnected.size();i++){
            if(vis[i]==0){
                dfs(isConnected,i,vis);
                res++;
            }
        }
        return res;
    }
};