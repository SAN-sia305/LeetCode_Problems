class Solution {
public:
    string reverseVowels(string s) {
        string vowel = "AaEeIiOoUu";
        int p1 = 0, p2 = s.size()-1;
        while(p1 < p2){
           while(p1<p2 && vowel.find(s[p1]) == string::npos){ p1++; }
           while(p1<p2 && vowel.find(s[p2]) == string::npos){ p2--; }
           if(p1<p2){
            swap(s[p1],s[p2]);
            p1++;
            p2--;
           }
        }

    return s;
    }
};