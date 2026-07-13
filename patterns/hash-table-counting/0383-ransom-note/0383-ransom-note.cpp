class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mpp;
        unordered_map<char,int> mpp2;
        for(int i=0;i<ransomNote.size();i++){
            mpp[ransomNote[i]]++;
        }
        for(int j=0;j<magazine.size();j++){
            mpp2[magazine[j]]++;
        }
        bool ans = true;
        for(auto it:mpp){
            if(it.second<=mpp2[it.first]) continue;
            else return false;
        }
        return ans;
    }
};