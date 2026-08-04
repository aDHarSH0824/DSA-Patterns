class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int mini = nums[0];
        int maxi = nums[nums.size()-1];
        for(int i=mini;i<=maxi;i++){
            int low = 0,high = nums.size()-1;
            int val = 0;
            while(low<=high){
                int mid = (low+high)/2;
                if(nums[mid]==i){
                    val++;
                    break;
                }else if(nums[mid]>i) high=mid-1;
                else low=mid+1;
            }
            if(!val) ans.push_back(i); 
        }
        return ans;
    }
};