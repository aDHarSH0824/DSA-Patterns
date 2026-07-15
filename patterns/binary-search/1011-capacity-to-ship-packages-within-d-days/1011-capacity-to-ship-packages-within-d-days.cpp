class Solution {
public:
    int isitOkay(vector<int>& arr,int days,int mid){
        int Days = 0;
        int weight = 0;
        for(int i=0;i<arr.size();i++){
            if(weight+arr[i]<=mid){
                weight+=arr[i];
            }else{
                Days++;
                weight=arr[i];
            }
        }
        if(weight<=mid) Days++;
        return Days<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high =  accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid = (low+high)/2;
            if(isitOkay(weights,days,mid)){
                high=mid-1;
            }else low=mid+1;
        }
        return low;
    }
};