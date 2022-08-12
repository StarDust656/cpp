class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix;
        
        int sum=0;
        for(auto i : nums){
            sum = sum+i;
            prefix.push_back(sum);
        }
        
        int val=INT_MIN;
        int sum2=0;
        for(int i=0;i<nums.size();i++){
            sum2 = sum2+nums[nums.size()-1-i];
            if(prefix[prefix.size()-1-i]==sum2)
                val= nums.size()-1-i;
        }
        
        if(val!=INT_MIN)
            return val;
        else
            return -1;
    }
};