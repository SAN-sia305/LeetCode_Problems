#include<string.h>
#include<stack>
class Solution {
public:
    string removeStars(string s) {
        int n = s.size();
        std::stack<char> s1;
        for(int i = 0; i < n; i++)
        {
           if(s[i] == '*' && !s1.empty()) { s1.pop();  }
           else{ s1.push(s[i]); }
        }

        std::string result = "";
        while(!s1.empty())
        {
            result+= s1.top();
            s1.pop();
        }

        std::reverse(result.begin(),result.end());
        return result;
    }
};