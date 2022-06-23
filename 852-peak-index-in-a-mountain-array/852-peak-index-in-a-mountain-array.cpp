class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0;
        int high=arr.size()-1;
        int res=-1;
        while(low<high){
            int mid = low+(high-low)/2;
            if(arr[mid]>arr[mid+1]){
                res=mid;
                high=mid;
            }
            else{
                res = mid+1;
                low=mid+1;
            }
        }
        
        return res;
    }
};