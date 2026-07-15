class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0,high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]<=nums[nums.size()-1]) high=mid-1;
            else low=mid+1;
        }
        if(nums.size()==1) return nums[0];
        else return nums[low];
    }
};