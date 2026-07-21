class Solution {
public:
    void function(string& digits,int n,int index,string& temp,vector<string>& arr,unordered_map<char,string>& mpp){
        if(index==n){
            arr.push_back(temp);
            return;
        }
        string choice = mpp[digits[index]-'0'];
        for(int i=0;i<choice.size();i++){
            temp.push_back(choice[i]);
            function(digits,n,index+1,temp,arr,mpp);
            temp.pop_back();
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        unordered_map<char,string> mpp;
        mpp[2]="abc",mpp[3]="def",mpp[4]="ghi",mpp[5]="jkl",mpp[6]="mno",mpp[7]="pqrs",mpp[8]="tuv",mpp[9]="wxyz";
        vector<string> arr;
        string temp = "";
        function(digits,n,0,temp,arr,mpp);
        return arr;
    };
};