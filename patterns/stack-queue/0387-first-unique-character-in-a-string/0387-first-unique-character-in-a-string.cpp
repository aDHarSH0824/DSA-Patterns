class Solution {
public:
    int firstUniqChar(string s) {
        map<int,int> mpp;
        for(int i=0;i<s.size();i++) mpp[s[i]]++;
        int ans = -1;
        for(int i=0;i<s.size();i++){
            if(mpp[s[i]]==1){
                ans = s[i];
                break;
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]==ans) return i;
        }
        return ans;
    }
};