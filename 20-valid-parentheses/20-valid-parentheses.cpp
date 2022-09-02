class Solution {
public:
    bool isValid(string s) {
        
        stack<char> an;
        int n=s.size();
        
        for(int i=0;i<n;i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                
                an.push(s[i]);
                continue;
                
            }
             if(an.empty())
                    return false;
            
            if((s[i]==')'&& an.top()=='(') ||(s[i]=='}' && an.top()=='{')||(s[i]==']'&&an.top()=='[')){               
                        an.pop();
                        
                }
                else
                    return false;
            }            
        
         return an.empty();
    }
};