class Solution:
    def toGoatLatin(self, sentence: str) -> str:
        words = sentence.split()
        noa = 1
        list = [] 
        for word in words:
            if word[0].lower() in 'aeiou':
                list.append(word+"ma")
            else:
                fst = word[0]
                rest = word[1::]
                list.append(rest+fst+"ma")
            for i in range(noa):
                list.append("a")
            list.append(" ")
            noa+=1

        string = ''.join(list) 
        sstr = string.rstrip()
        return sstr            
            


        
