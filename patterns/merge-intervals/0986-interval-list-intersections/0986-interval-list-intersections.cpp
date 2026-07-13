class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> arr;
        int i = 0,j=0;
        while(i<firstList.size() && j<secondList.size()){
            int start1=firstList[i][0],end1 = firstList[i][1];
            int start2=secondList[j][0],end2 = secondList[j][1];
            if((start1<=end2 && start1>=start2) || (end1>=start2 && end1<=end2)){
                arr.push_back({max(start1,start2),min(end1,end2)});
            }else if((start2<=end1 && start2>=start1) || (end2>=start1 && end2<=end1)){
                arr.push_back({max(start1,start2),min(end1,end2)});
            }
            if(end1<=end2) i++;
            else j++;
        }
        return arr;
    }
};