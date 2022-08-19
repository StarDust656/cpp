class Solution {
public:
    
    bool ifCapacity(int mid,int days,vector<int>& weights){
        int day=1;
        int sum=0;
        for(auto i=0;i<weights.size();i++){
            sum=sum+weights[i];
            
            if(sum>mid){
                day++;
                sum=0;
                i--;
                
            }
            
            
        }
        if(day>days)
                return false;
        else
                return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
        int left=int(*max_element(weights.begin(),weights.end()));
        int right=accumulate(weights.begin(),weights.end(),0);
        
        while(left<right){
            
            int mid=left+(right-left)/2;
            
            if(ifCapacity(mid,days,weights))
                right =mid;
            else
                left=mid+1;
        } 
            return left;
        
    }
};