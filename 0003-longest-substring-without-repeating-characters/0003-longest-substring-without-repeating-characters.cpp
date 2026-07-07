class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int low = 0,high = 0;
        map<int,int> mpp;
        while(high<s.size()){
            mpp[s[high]]++;
            while(mpp[s[high]]>1){
                mpp[s[low]]--;
                low++;
            }
            high++;
            maxLen = max(maxLen,high-low);
        }
        return maxLen;
    }
};