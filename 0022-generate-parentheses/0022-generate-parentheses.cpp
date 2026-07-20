class Solution {
public:
    void ans(int n,int open,int closed,string& s,vector<string>& arr){
        if(open==n && closed==n){
            arr.push_back(s);
            return;
        }
        if(open<n){
            s.push_back('(');
            ans(n,open+1,closed,s,arr);
            s.pop_back();
        }
        if(closed<open){
            s.push_back(')');
            ans(n,open,closed+1,s,arr);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string s;
        vector<string> arr;
        ans(n,0,0,s,arr);
        return arr;
    }
};