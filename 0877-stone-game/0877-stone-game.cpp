class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int i=0,j=0;
        int ans = 1;
        int alice = 0,bob=0;
        while(i<=j){
            if(ans){
                if(piles[i]>=piles[j]) alice=piles[i],i++;
                else alice=piles[j],j--;
            }else{
                if(piles[i]>=piles[j]) bob=piles[i],i++;
                else bob=piles[j],j--;
            }
            ans=1-ans;
        }
        if(alice>bob) return true;
        else return false;
    }
};