class Solution {
public:
    void subsets1(vector<int>& arr,int n,int index,vector<int> temp,vector<vector<int>>& ans){
        if(index==n){
            ans.push_back(temp);
            return;
        }
        subsets1(arr,n,index+1,temp,ans);
        temp.push_back(arr[index]);
        subsets1(arr,n,index+1,temp,ans);
        temp.pop_back();
        return;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        subsets1(nums,nums.size(),0,temp,ans);
        return ans;
    }
};