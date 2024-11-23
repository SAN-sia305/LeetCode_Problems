class Solution {
public:
    char repeatedCharacter(string s){
       int min = s.size()-1;
       for(int i=0;i<(s.size()-1);i++){
           for(int j=i+1;j<(s.size()-1); j++){
              if(s[i]==s[j] && j<min){
                    min = j;

              }
              else{ continue;}
           }          
        }
      return s[min];
    }
};