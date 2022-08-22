class Solution {
public:
	int lengthOfLongestSubstring(string s) 
	{
	    unordered_set<char> con;
        
        int i=0;
        int j=0;
        int val=0;
        while(j<s.size()){
            if(con.find(s[j])==con.end()){
                con.insert(s[j++]);
                val=max(val,j-i);
            }
            else{
                con.erase(s[i++]);
            }
        }
          
        return val;
                         
	}
};