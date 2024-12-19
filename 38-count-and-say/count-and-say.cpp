class Solution {
public:
    string countAndSay(int n) {
        if(n == 1){ return "1"; }
        if(n == 2){ return "11"; }
        string strN = "11";
        for(int x = 3; x <= n; x++){
            string temp = "";
            int count = 1;
            for(int i = 1; i < strN.size() ; i++){
                if(strN[i]!=strN[i-1]){
                    temp += to_string(count)+strN[i-1];
                    count = 1;
                }
                else{ count++; }
            }
            temp += to_string(count)+strN.back();
            strN = temp;
        }
      
    return strN;
    }
};