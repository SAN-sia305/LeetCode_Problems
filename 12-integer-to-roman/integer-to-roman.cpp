class Solution {
public:
    string intToRoman(int num) {
        map<int,string,greater<int>> mp = { {1,"I"},
                                       {4,"IV"},
                                       {5,"V"},
                                       {9,"IX"},
                                       {10,"X"},
                                       {40,"XL"},
                                       {50,"L"},
                                       {90,"XC"},
                                       {100,"C"},
                                       {400,"CD"},
                                       {500,"D"},
                                       {900,"CM"},
                                       {1000,"M"},
                                     };
        string output = ""; 
        for(auto& [first,second] : mp){                                    
            while(num >= first){
                num-=first;
                output+=second;
            }
        }
        return output;
    }
};