class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
      if(str1 == str2) { return str1; }
      if(str1.size() > str2.size()){
        if(str1.substr(0,str2.size()) == str2){
            return gcdOfStrings(str1.substr(str2.size()), str2);
        }
      }
      else{
        if(str2.substr(0,str1.size()) == str1){
            return gcdOfStrings(str2.substr(str1.size()), str1);
        }
      }
    return "";     
    }
};