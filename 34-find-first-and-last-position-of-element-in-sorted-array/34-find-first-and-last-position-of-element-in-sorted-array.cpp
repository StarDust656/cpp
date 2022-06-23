class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int low = 0;
        int high = nums.size()-1;
        int res=-1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(target == nums[mid]){
                res=mid;
                high=mid-1;
            }
            else if(target<nums[mid])
                high = mid-1;
            else
                low=mid+1;
        }
        
        ans.push_back(res);
        
        int res1=-1;
         int low1 = 0;
        int high1 = nums.size()-1;
        
        while(low1<=high1){
            int mid = low1 + (high1-low1)/2;
            
            if(target == nums[mid]){
                res1=mid;
                low1=mid+1;
            }
            else if(target<nums[mid])
                high1 = mid-1;
            else
                low1=mid+1;
        }
        
        ans.push_back(res1);
        
        return ans;
    }
};