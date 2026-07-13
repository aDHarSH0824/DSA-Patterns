class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low =0,high=0;
        int sum = 0;
        int minLen = INT_MAX;
        while(high<nums.size()){
            sum+=nums[high];
            while(sum>=target){
                sum-=nums[low];
                minLen = min(high-low+1,minLen);
                low++;
            }
            high++;
        }
        if(minLen==INT_MAX) return 0;
        return minLen;
    }
};