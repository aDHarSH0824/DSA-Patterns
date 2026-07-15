class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size()==1) return nums[0]; 
        int low = 0, high = nums.size() - 1;
        while (high>low && nums[low] == nums[high]) {
            high--;
        }
        int n = high;
        int right = n; 
        while (low <= n) {
            int mid = low + (n - low) / 2;
            if (nums[mid] <= nums[right]) {
                n = mid - 1;
            } else {
                low = mid + 1; 
            }
        }
        return nums[low];
    }
};
