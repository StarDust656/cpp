class Solution {
public:
    void sortColors(vector<int>& nums) {
     
    int n=nums.size();
    int low=0;
    int mid=0;
    int last=n-1;
    while(mid<=last)
    {
        switch(nums[mid])
        {
            case 0:  
                swap(nums[low++],nums[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[mid],nums[last--]);
        }
    }
    }
};