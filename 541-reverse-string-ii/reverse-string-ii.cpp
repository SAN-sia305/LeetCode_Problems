#include <algorithm>  // for std::reverse
#include <string>

class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for(int i = 0;i < n;i += 2*k){
             int end = (i+k < n)? i+k: n ;
             std::reverse(s.begin() + i, s.begin() + end);    
        }
        return s;
    }
};