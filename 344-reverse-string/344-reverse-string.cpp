class Solution {
public:
    
    void swap(int i,int j,vector<char>& s){
        if(i>=j)
            return;
        char temp=s[j];
        s[j]=s[i];
        s[i]=temp;
        
        swap(++i,--j,s);
    }
    void reverseString(vector<char>& s) {
       
        int i=0;
        int j=s.size()-1;
        swap(i,j,s);
        return;
    }
    
};