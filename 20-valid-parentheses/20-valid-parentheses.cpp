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
            
            if(s[i]==')'||s[i]=='}'||s[i]==']'){
           
                if(an.empty())
                    return false;
                
                else if(an.top()=='{'){
                    if(!an.empty() &&s[i]=='}'){
                         an.pop();
                    }
                    else 
                        return false;
                }
                  else if(an.top()=='('){
                    if(!an.empty() && s[i]==')'){
                         an.pop();
                        
                    }
                    else 
                        return false;
                }
                else if(an.top()=='['){
                    if(!an.empty() && s[i]==']'){
                        an.pop();
                    }
                    else 
                        return false;
                }
            }            
        
         
        }
        
    if(an.empty())
        return true;
        else
            return false;
    }
};