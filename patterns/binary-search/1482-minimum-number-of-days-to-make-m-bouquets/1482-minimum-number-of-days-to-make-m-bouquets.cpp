class Solution {
public:
    bool isitOkay(vector<int>& arr,int mid,int m,int k){
        int ans = 0;
        int val = 0;
        int i = 0;
        while(i<arr.size()){
            if(arr[i]<=mid){
                val++;
                if(val==k) ans++,val=0;
            }else val=0;
            i++;
        }
        return ans>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size()) return -1;
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid = (low+high)/2;
            if(!isitOkay(bloomDay,mid,m,k)){
                low=mid+1;
            }else high=mid-1;
        }
        return low;
    }
};