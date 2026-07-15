class Solution {
public:
    bool isitOkay(vector<int>& arr,int mid){
        int ans = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=mid) ans++;
        }
        return ans>=mid;
    }
    int hIndex(vector<int>& citations) {
        int low = 1,high = citations.size();
        while(low<=high){
            int mid = (low+high)/2;
            if(isitOkay(citations,mid)) low=mid+1;
            else high=mid-1;
        }
        return high;
    }
};