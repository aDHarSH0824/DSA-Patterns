class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size(); 
        int low = 0,high = nums.size()-1;
        if(target>nums[n-1]){
            int i = n-1;
            while(i>=0 && target>nums[i]){
                i--;
            }
            high=i;
        }else{
            int i = 0;
            while(i<n && target<nums[i]){
                i++;
            }
            low=i;
        }
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return -1;
    }
};