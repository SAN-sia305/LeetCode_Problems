#include<sstream>
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        istringstream fetchWord(s);
        string word, revString ="";
        while(fetchWord >> word){
            reverse(word.begin(),word.end());
            revString+=word;
            revString+=" ";
        }
        if(!revString.empty() && revString.back() == ' '){
            revString.pop_back();
        }
    return revString;
    }
};