#include<string>
class Solution {
public:
    long long sumAndMultiply(int n) {
        string temp = to_string(n);

        if (temp == "0" || temp.empty()){
            return n;
        }
        string x = "";
        int sum = 0;
        int s = temp.size();
        for(int i = 0; i < s; i++){
            if(temp[i] != '0'){
                x += temp[i];
                sum += temp[i] - '0';
            }
        }
        long long y = stoi(x);
        long long res = y * sum;
        return res; 
        
    }
};