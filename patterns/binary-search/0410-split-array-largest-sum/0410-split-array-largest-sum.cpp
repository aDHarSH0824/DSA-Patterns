class Solution {
public:
    bool isitOkay(vector<int>&nums,int mid,int k){
        int ans = 1;
        int part = 0;
        for(int i=0;i<nums.size();i++){
            if(part+nums[i]<=mid){
                part+=nums[i];
            }else{
                ans++;
                part=nums[i];
                if(ans>k) return false;
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        if(nums.size()<k) return -1;
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid = (low+high)/2;
            if(isitOkay(nums,mid,k)){
                high=mid-1;
            }else low=mid+1;
        }
        return low;
    }
};