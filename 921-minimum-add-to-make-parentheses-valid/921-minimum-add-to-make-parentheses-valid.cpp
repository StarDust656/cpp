class Solution {
public:
    int minAddToMakeValid(string s) {
        if(s.empty())
            return 0;
        int ans=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                count++;
            else if(s[i]==')' && count!=0)
                count--;
            else if(s[i]==')' )
                ans++;
        }
        
        return abs(count)+ans;
    }
    
};