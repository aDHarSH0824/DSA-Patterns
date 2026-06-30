class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> arr;
        sort(intervals.begin(),intervals.end());
        int start = intervals[0][0];
        int end = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            int start2 = intervals[i][0],end2 = intervals[i][1];
            if(end<start2){
                arr.push_back({start,end});
                start = start2,end = end2;
            }else{
                start = min(start,start2);
                end = max(end,end2);
            }
        }
        arr.push_back({start,end});
        return arr;
    }
};