class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double amax=0;
        double res=INT_MIN;
        int low=0;
       double sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(i>=k-1){
                amax=sum/k;
                if(res<amax){
                    res=amax;                    
                }
                sum=sum-nums[low];
                low++;
            }
        }
        
        return res;
    }
};