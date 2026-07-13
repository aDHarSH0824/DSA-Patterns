class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums){
        vector<vector<int>> arr;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int sum = -1*nums[i];
            int low = i+1,high = nums.size()-1;
            while(low<high){
                int newSum = nums[low]+nums[high];
                if(sum==newSum){
                    arr.push_back({nums[i],nums[low],nums[high]});
                    low++,high--;
                    while(low<nums.size() && nums[low]==nums[low-1]) low++;
                    while(high>low && nums[high]==nums[high+1]) high--;
                }else if(newSum<sum) low++;
                else high--;
            }
        }
        return arr;
    }
};