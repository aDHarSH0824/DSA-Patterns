class Solution {
public:
    int ans(vector<int>& cost,vector<int>& dp,int index){
        if(index<=1) return dp[index];
        if(dp[index]!=-1) return dp[index];
        return dp[index] = cost[index]+min(ans(cost,dp,index-1),ans(cost,dp,index-2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(cost.size());
        for(int i=2;i<dp.size();i++){
            dp[i]=-1;
        }
        dp[0]=cost[0],dp[1]=cost[1];
        return min(ans(cost,dp,n-2),ans(cost,dp,n-1));
    }
};