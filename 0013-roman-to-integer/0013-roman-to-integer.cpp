class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int sum = 0;
        int prev = 0;
         for(char c  : s){
            int cur = mp[c];
            if(prev < cur){
              sum += cur-2*prev;
            }
            else{
                sum +=  cur;
            }
            prev = cur;
         }
    return sum;
    }
};