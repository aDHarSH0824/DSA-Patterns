class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);
        stack<int> st;
        for(int i=n-2;i>=0;i--) st.push(nums[i]);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i]) st.pop();
            if(st.empty()) arr[i]=-1;
            else arr[i]=st.top();
            st.push(nums[i]);
        }
        return arr;
    }
};