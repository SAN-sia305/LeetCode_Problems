#include<cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(char c : s){
           if(isalnum(c)){
            ans+=tolower(c);
           }
        }
        
        int l = 0, r = ans.size()-1,cnt = 0;
        while(l < r){
            if(ans[l] != ans[r]){
                return false;
            }
            l++;
            r--;
            cnt++;
        }
        if(cnt == ans.size()/2){ return true; }
        return false;
    }
};