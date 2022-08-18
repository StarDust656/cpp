class Solution {
public:
    bool isPerfectSquare(int num) {
         int low=1;
         int high=num;
        
    while(low<=high){
        float mid= low+(high-low)/2;
        
         if(mid==num/mid){
           return true;
        }
        else if(mid<num/mid){
            low = mid+1;
        }
        else{
            high=mid-1;
        }
    }    
    
        
       
    
         return false;
    }
    
};