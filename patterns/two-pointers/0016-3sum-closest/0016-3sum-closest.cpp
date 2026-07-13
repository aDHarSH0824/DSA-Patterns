class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int Diff = INT_MAX;
        int ans = 0;
        for(int i=0;i<nums.size()-2;i++){
            int low = i+1,high = nums.size()-1;
            while(low<high){
                int newSum = nums[i]+nums[low]+nums[high];
                int diff = abs(target-newSum);
                if(diff<=Diff){
                    Diff = diff;
                    ans = newSum;
                }
                if(newSum==target) return newSum;
                else if(newSum<target) low++;
                else high--; 
            }
        }
        return ans;
    }
};