class Solution {
public:
    void fun(vector<int>& arr,int sum,int n,int index,vector<int>& temp,vector<vector<int>>& ans,int target){
        if(index==n){
            if(sum==target){
                ans.push_back(temp);
            }
            return;
        }
        fun(arr,sum,n,index+1,temp,ans,target);
        if(sum+arr[index]<=target){
            temp.push_back(arr[index]);
            sum+=arr[index];
            fun(arr,sum,n,index,temp,ans,target);
            temp.pop_back();
            sum-=arr[index];
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n = candidates.size();
        int sum = 0;
        fun(candidates,sum,n,0,temp,ans,target);
        return ans;
    }
};