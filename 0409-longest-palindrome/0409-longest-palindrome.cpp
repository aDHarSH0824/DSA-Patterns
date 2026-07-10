class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int> mpp;
        for(int i=0;i<s.size();i++){
            mpp[(int)s[i]]++;
        }
        int ans = 0;
        for(auto it:mpp){
            if(it.second%2==0) ans+=(it.second);
            else ans+=(it.second-1);
        }
        if(ans!=s.size()) ans++;
        return ans;
    }
};