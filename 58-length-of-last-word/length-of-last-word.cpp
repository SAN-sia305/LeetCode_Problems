class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = 0;
        int i=s.length() - 1;
        while(i>=0 && s[i] == ' '){
            i--;
        }
        while(i>=0 && s[i] != ' '){
            n++;
            i--;
        }
    return n;

    }
};