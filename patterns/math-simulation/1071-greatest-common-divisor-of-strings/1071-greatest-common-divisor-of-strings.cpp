class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string v = "";
        if(str1+str2==str2+str1){
            int ans = gcd(str1.size(),str2.size());
            int i = 0;
            while(i<ans){
                v+=str1[i];
                i++;
            }
        }
        return v;
    }
};