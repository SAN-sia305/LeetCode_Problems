class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        str_com = ""
        loop = min(len(word1), len(word2))
        c = 0
        for c in range(loop):
            str_com+= word1[c]+word2[c]
        
        if len(word1) > len(word2):
            str_com += word1[c+1:]
        elif len(word1) < len(word2):
            str_com += word2[c+1:]

        return str_com