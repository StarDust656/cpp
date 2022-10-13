class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int> hal;
        
        for(int i=0;i<edges.size();i++){
            hal[edges[i][0]]++;
            hal[edges[i][1]]++;
        }
        
        auto it= hal.begin();
        
        while(it !=hal.end()){
            if(it->second>1)
                return it->first;
            it++;
        }
        
        
        return 0;
    }
};