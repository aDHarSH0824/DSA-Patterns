class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low = 0,high = 0;
        int maxLen = 0;
        map<int,int> mpp;
        while(high<nums.size()){
            mpp[nums[high]]++;
            while(mpp[0]>k){
                mpp[nums[low]]--;
                low++;
            }
            high++;
            maxLen = max(maxLen,high-low);
        }
        return maxLen;
    }
};