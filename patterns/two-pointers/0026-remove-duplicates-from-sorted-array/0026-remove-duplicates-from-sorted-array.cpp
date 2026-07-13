class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                nums[j]=101;
                j++;
            }else{
                i=j,j++;
            }
        }
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==101) break;
            else ans++;
        }
        return ans;
    }
};