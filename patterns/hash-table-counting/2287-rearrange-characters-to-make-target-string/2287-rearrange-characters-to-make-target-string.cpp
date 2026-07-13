class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        unordered_map<char,int> mpp2;
        for(int i=0;i<target.size();i++){
            mpp2[target[i]]++;
        }
        int ans = INT_MAX;
        for(auto it:mpp2){
            ans = min(ans,mpp[it.first]/it.second);
        }
        return ans;
    }
};