class Solution {
public:
    int mySqrt(int x) {
       int low=1;
        int high = x;
        if(x==0){
            return 0;
        }
        
        while(low<=high){
            int mid= low+(high-low)/2;
            if (mid == x / mid) {
            return mid;
            } 
            if(mid>=x/ mid){
                high=mid-1;
            }
            else if(mid<x/ mid){
                low = mid+1;
            }
        }
        
       
    
         return high;
    }
};

/*public int mySqrt(int x) {
int left = 1, right = x;
while (left <= right) {
int mid = left + (right - left) / 2;
if (mid == x / mid) {
return mid;
} else if (mid < x / mid) {
left = mid + 1;
} else {
right = mid - 1;
}
}
return right;
}*/