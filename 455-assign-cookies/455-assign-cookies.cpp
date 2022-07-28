class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
        int p=0;
        int q=0;
        
        
        int count = 0;
        
        while(p!=s.size() && q!=g.size()){
            if(s[p]>=g[q]){
                count++;
                p++;
                q++;
                
            }
            else if(g[q]>s[p]){
                p++;
            }
            
        }
        
        return count;
    }
};