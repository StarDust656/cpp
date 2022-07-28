class Solution {
public:
    int maximum69Number (int num) {
       vector<int> v;
         
        int n=num;
        
        while(n!=0){
            int k=n%10;
            v.push_back(k);
            n=n/10;
        }
        
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]==6){
                v[i]=9;
                break;
            }
        }
        
        int a=0;
        int b=v.size()-1;
            
            while(a<b){
                int temp=v[a];
                v[a]=v[b];
                v[b]=temp;
                
                a++;
                b--;
            }
        
        int ans=0;
        for(int i=0;i<v.size();i++){
            ans = ans*10 + v[i];
        }
        
        return ans;
    }
};