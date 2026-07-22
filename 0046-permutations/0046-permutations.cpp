class Solution {
public:
    void fn(vector<int>& arr,vector<bool>& choice,vector<int>& temp,vector<vector<int>>& ans){
        if(temp.size()==arr.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<arr.size();i++){
            if(!choice[i]){
                temp.push_back(arr[i]);
                choice[i]=true;
                fn(arr,choice,temp,ans);
                temp.pop_back();
                choice[i]=false;
            }
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> choice(nums.size(),false);
        fn(nums,choice,temp,ans);
        return ans;
    }
};