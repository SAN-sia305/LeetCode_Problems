class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int prefix = 0, max = 0;
        for(int i = 0;i < gain.size();i++){
           prefix += gain[i];
           if(prefix > max) { 
            max = prefix;
          }
        }
      return max;  
    }
};