class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:

        S = ""
        length1 = min(len(word1),len(word2))
        length2 = max(len(word1),len(word2))

        big = word1
        small = word2

        if len(word1) < len(word2):
            big = word2
            small = word1

        for i in range(0,length1):
            S += word1[i] + word2[i]
        
        for j in range(i+1,length2):
            S += big[j]        

        return S