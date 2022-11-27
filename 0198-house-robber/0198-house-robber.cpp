class Solution {
public:

    int func(int i, vector<int> &nums, vector<int> &dp){
        if(i>=nums.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        
        int ro = nums[i]+ func(i+2,nums,dp);
        int nro = func(i+1 ,nums,dp);
        
        return dp[i]=max(ro,nro);
    }
    
    int rob(vector<int>& nums) {
        int i=0;
        vector<int> dp(nums.size(),-1);
        int ans= func(i,nums,dp);
        
        return ans;
    }
};