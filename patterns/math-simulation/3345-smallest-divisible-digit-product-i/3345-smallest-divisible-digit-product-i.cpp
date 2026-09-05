class Solution {
public:
    int product(int n){
        int ans = 1;
        while(n!=0){
            ans*=(n%10);
            n=n/10;
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        while(true){
            int val = product(n);
            if(val%t==0) break;
            else n++;
        }
        return n;
    }
};