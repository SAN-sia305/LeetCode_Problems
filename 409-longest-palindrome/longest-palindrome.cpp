class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size() == 1){ return 1; }
        if(s.size() == 2 && s[0] == s[1]){ return 2;}
        map<char,int> fq;
        for(char c : s){
            fq[c]++;
        }

        int lens = 0;
        bool oddzz = false;
        for(auto& [c,i] : fq){
            if(i%2 == 0){
                lens+=i;
            }
            if(i%2 == 1){
                lens+=i-1;
                oddzz = true;
            }
        }
        if(oddzz){lens+=1;}
        return lens;
    }
};