class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> v;
        intervals.push_back({newInterval[0],newInterval[1]});
        sort(intervals.begin(),intervals.end());
        int start = intervals[0][0];
        int end = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            int start2 = intervals[i][0];
            int end2 = intervals[i][1];
            if(end<start2){
                v.push_back({start,end});
                start = start2,end = end2;
            }else{
                start = start;
                end = max(end,end2);
            }
        }
        v.push_back({start,end});
        return v;
    }
};