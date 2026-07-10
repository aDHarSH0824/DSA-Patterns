class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int> evens;
        unordered_map<int,int> odds;
        unordered_map<int,int> mpp;
        for(int i=0;i<s.size();i++){
            mpp[(int)s[i]]++;
        }
        for(auto it:mpp){
            if(it.second%2==0){
                evens[it.first] = it.second;
            }else odds[it.first] = it.second;
        }
        int ans = 0;
        for(auto it:evens){
            ans+=(it.second);
        }
        for(auto it:odds){
            ans+=(it.second-1);
        }
        if(odds.size()!=0) ans++; 
        return ans;
    }
};