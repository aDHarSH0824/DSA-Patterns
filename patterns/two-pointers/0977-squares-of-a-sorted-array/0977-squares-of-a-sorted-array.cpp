class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr(nums.size());
        int ans = nums.size()-1;
        int i=0,j=nums.size()-1;
        while(i<=j){
            int v1 = nums[i]*nums[i];
            int v2 = nums[j]*nums[j];
            if(v1>=v2){
                arr[ans] = v1;
                i++,ans--;
            }else{
                arr[ans] = v2;
                j--,ans--;
            }
        }
        return arr;
    }
};