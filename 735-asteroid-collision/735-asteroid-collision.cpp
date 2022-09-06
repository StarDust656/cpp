class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        
        for(auto it : asteroids){
            if(st.empty()|| it>0){
                st.push(it);
            }
            else{
                while(!st.empty() && st.top()>0 && st.top()<abs(it)){
                    st.pop();
                }
                
                if(!st.empty() && st.top()+it==0){
                    st.pop();
                }
                else if(st.empty()|| st.top()<0){
                    st.push(it);
                }
            }
        }
        
        vector<int> ans;
        
        while(!(st.empty())){
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};