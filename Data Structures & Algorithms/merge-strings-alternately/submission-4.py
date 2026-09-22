class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:

        S = ""
        short = min(len(word1),len(word2))
        long = max(len(word1),len(word2))

        for i in range(short):
            S += word1[i] + word2[i]
        
        if len(word1)>len(word2):
            for j in range(short,long):
                S += word1[j]
        else:
            for j in range(short,long):
                S += word2[j]        

        return S