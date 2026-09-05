class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int low = 0,high = 0;
        unordered_map<int,int> mpp;
        int maxLen = 0;
        while(high<nums.size()){
            mpp[nums[high]]++;
            while(mpp[nums[high]]>k){
                mpp[nums[low]]--;
                low++;
            }
            maxLen = max(maxLen,high-low+1);
            high++;
        }  
        return maxLen;
    }
};