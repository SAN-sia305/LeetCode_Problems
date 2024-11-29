class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string storeAlternative;
        int i = 0,j = 0; 
        while( i<word1.size() && j<word2.size()){
            storeAlternative += word1[i++];
            storeAlternative += word2[j++];
        }
        while( i < word1.size()){ storeAlternative += word1[i++];}
        while( j < word2.size()){ storeAlternative += word2[j++];}
        return storeAlternative;
    }
};