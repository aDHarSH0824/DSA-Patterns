class Solution {
public:
    string removeDuplicates(string s, int k) {
        string ans = "";
        int n = s.size();
        stack<pair<char,int>> st;
        for(int i=0;i<n;i++){
            if(!st.empty() && st.top().first==s[i]){
                st.top().second++;
                if(st.top().second==k){
                    st.pop();
                }
            }else st.push({s[i],1});
        }
        while(!st.empty()){
            while(st.top().second>0){
                ans+=st.top().first;
                st.top().second--;
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};