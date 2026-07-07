class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(ans=="") ans+=s[i];
            else{
                if(s[i]!=ans[ans.size()-1]) ans+=s[i];
                else ans.pop_back();
            }
        }
        return ans;
    }
};