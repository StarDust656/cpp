class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int flag=0;
        int vmax = INT_MIN;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]>0){
                flag=1;
            }
            
            sum = sum + nums[i];
            if(sum<0){
                sum=0;
            }
            if(sum>vmax){
                vmax=sum;
            }
            
        }
        if(flag==1)
        return vmax;
        else{
            sort(nums.begin(),nums.end());
            return nums[nums.size()-1];
        }
    }
};