class Solution {
public:
    int ans(vector<int>& cost,vector<int>& dp,int index){
        if(index>=cost.size()) return 0;
        if(dp[index]!=-1) return dp[index];
        return dp[index] = cost[index]+min(ans(cost,dp,index+1),ans(cost,dp,index+2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size());
        for(int i=0;i<dp.size();i++){
            dp[i]=-1;
        }
        int anss = min(ans(cost,dp,0),ans(cost,dp,1));
        return anss;
    }
};