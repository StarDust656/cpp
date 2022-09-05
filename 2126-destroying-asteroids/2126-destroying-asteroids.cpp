class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        
        unsigned long int m = (unsigned long int)mass;
        
        for(int i=0;i<asteroids.size();i++){
            if(m<asteroids[i])
                return false;
            m=m+asteroids[i];
        }
        
        return true;
    }
};