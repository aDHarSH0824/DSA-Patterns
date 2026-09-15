class Solution {
public:
    int maxLoot(vector<int>& nums,vector<int>& dp,int idx){
        if(idx>=nums.size()) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int pick = nums[idx]+maxLoot(nums,dp,idx+2);
        int skip = maxLoot(nums,dp,idx+1);
        return dp[idx]=max(pick,skip);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size());
        for(int i=0;i<dp.size();i++){
            dp[i]=-1;
        }
        int idx = 0;
        return maxLoot(nums,dp,idx);
    }
};