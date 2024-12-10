class Solution {
public:
    bool isSubsequence(string s, string t) {
      int Tsize = t.size();
      for(int i = Tsize; i >= 0; i--){
        if(!s.empty() && s.back() == t[i]){ s.pop_back(); }
      }
    return s.empty();       
    }
};