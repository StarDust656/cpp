class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        
        per(nums,0,res);
        
        return res;
        
    }
    
    
    void per(vector<int> &num,int i,vector<vector<int>> &res){
        if(i==num.size()){
            res.push_back(num);
            return ;
        }
        
        for(int j=i;j<num.size();j++){
            swap(num[i],num[j]);
            per(num,i+1,res);
            swap(num[i],num[j]);
        }
    }
};