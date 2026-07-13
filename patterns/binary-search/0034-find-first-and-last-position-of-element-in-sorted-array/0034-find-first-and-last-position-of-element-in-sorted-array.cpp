class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0,high =nums.size()-1;
        int first = 0,last = 0;
        while(low<=high){
            first = (low+high)/2;
            if(nums[first]<target) low=first+1;
            else high=first-1;
        }
        if(low<nums.size() && nums[low]==target) first=low;
        else first=-1;
        low =0,high = nums.size()-1;
        while(low<=high){
            last = (low+high)/2;
            if(nums[last]<=target) low=last+1;
            else high=last-1; 
        }
        if(high>=0 && nums[high]==target) last=high;
        else last =-1;
        return {first,last};
    }
};