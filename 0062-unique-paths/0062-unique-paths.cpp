class Solution {
public:
    int parse(int m,int n,vector<vector<int>>& dp){
        if(m==0 || n==0) return 0;
        if(m==1 && n==1) return 1;
        if(dp[m][n]!=-1) return dp[m][n];
        return dp[m][n] = parse(m,n-1,dp)+parse(m-1,n,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int> (n+1,-1));
        return parse(m,n,dp);
    }
};