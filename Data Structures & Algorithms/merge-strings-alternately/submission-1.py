class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:

        S = ""
        short = min(len(word1),len(word2))
        long = max(len(word1),len(word2))

        big = word1

        if len(word1) < len(word2):
            big = word2

        for i in range(short):
            S += word1[i] + word2[i]
        
        for j in range(short,long):
            S += big[j]        

        return S