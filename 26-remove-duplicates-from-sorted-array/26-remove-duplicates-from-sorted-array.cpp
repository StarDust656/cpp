class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        
        for(auto i : nums){
            s.insert(i);
            
        }
        
        int i=0;
        
        for(auto a :s){
            nums[i] = a;
            i++;
        }
        
        return s.size();
    }
};