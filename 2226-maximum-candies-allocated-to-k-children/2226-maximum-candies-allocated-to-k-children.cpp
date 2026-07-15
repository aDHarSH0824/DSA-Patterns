class Solution {
public:
    bool isitOkay(vector<int>& arr,long long k,int mid){
        long long students = 0;
        for(int i=0;i<arr.size();i++){
            students+=(arr[i]/mid);
        }
        return students>=k;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long sum = accumulate(candies.begin(),candies.end(),0LL);
        if(sum<k) return 0;
        int low = 1,high = *max_element(candies.begin(),candies.end());
        while(low<=high){
            int mid = (low+high)/2;
            if(isitOkay(candies,k,mid)) low=mid+1;
            else high=mid-1;
        }
        return high;
    }
};